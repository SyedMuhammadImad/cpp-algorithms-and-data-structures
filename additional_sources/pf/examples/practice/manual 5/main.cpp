#include <iostream>

using namespace std;

int main()
{
  cout<<"series of numbers of 100 and even and odd difference"<<endl;
  for(int i=1;i<=100;i++)
  {
      if(i%2==0)
      {
          cout<<"even number:"<<i<<endl;
      }
  else
    {
  cout<<"odd numbers:"<<i<<endl;
    }
  }
    return 0;
}
