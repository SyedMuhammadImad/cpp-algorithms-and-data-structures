#define main example_main
#include "../additional_sources/ds/practice/stack with array.cpp"
#undef main
#include <cassert>
#include <vector>
#include <random>
int main(){stack actual;std::vector<int> reference;std::mt19937 rng(42);
 for(int i=0;i<20000;++i){if(rng()%2){int value=static_cast<int>(rng()%200)-100;actual.push(value);if(reference.size()<100)reference.push_back(value);}
  else{actual.pop();if(!reference.empty())reference.pop_back();}
  assert(actual.isEmpty()==reference.empty());if(!reference.empty())assert(actual.Top()==reference.back());}
 for(int i=0;i<120;++i)actual.pop();assert(actual.isEmpty());assert(actual.Top()==-1);}
