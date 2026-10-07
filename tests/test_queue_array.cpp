#define main example_main
#include "../additional_sources/ds/practice/queue with array.cpp"
#undef main
#include <cassert>
#include <deque>
#include <random>
int main(){
 queue actual;std::deque<int> reference;std::mt19937 rng(42);
 for(int i=0;i<20000;++i){
  if(rng()%2){const int value=static_cast<int>(rng()%200)-100;bool result=actual.push(value);
   assert(result==(reference.size()<20));if(result)reference.push_back(value);
  }else{bool result=actual.pop();assert(result==!reference.empty());if(result)reference.pop_front();}
  assert(actual.isEmpty()==reference.empty());
  if(!reference.empty())assert(actual.peek()==reference.front());
  else{bool threw=false;try{actual.peek();}catch(const std::underflow_error&){threw=true;}assert(threw);}
 }
}
