"""Compile and run every standalone example and the adversarial checks."""
import json,pathlib,shutil,subprocess,tempfile,os
root=pathlib.Path(__file__).resolve().parent
compiler=shutil.which('g++')
if not compiler:raise SystemExit('Install a C++17 compiler and put g++ on PATH')
checks=json.loads((root/'test_cases.json').read_text());executables={}
with tempfile.TemporaryDirectory(prefix='project-check-') as temp:
 out=pathlib.Path(temp)
 for i,source in enumerate(sorted(root.rglob('*.cpp'))):
  rel=source.relative_to(root).as_posix();exe=out/(str(i)+('.exe' if os.name=='nt' else ''))
  subprocess.run([compiler,'-std=c++17','-Wall','-Wextra','-Wpedantic',str(source),'-o',str(exe)],check=True,timeout=60,capture_output=True)
  executables[rel]=exe
  result=subprocess.run([str(exe)],input=checks['normal_inputs'].get(rel,''),text=True,encoding='utf-8',errors='replace',capture_output=True,cwd=out,timeout=8)
  assert result.returncode==0,(rel,result.stderr)
 for case in checks['boundary_cases']:
  args=case['case'] if isinstance(case['case'],list) else []
  data='' if args else case['case']
  result=subprocess.run([str(executables[case['file']]),*args],input=data,text=True,encoding='utf-8',errors='replace',capture_output=True,cwd=out,timeout=8)
  assert result.returncode==case['expected_exit'],(case['file'],result.stderr)
 for rel in checks['normal_inputs']:
  for value in ['', 'bad\n']:
   result=subprocess.run([str(executables[rel])],input=value,text=True,capture_output=True,cwd=out,timeout=3)
   assert result.returncode in (0,1),(rel,result.returncode)
print('Compiled and ran',len(executables),'source/test programs; boundary checks passed.')
