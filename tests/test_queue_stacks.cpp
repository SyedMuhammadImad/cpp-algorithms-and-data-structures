#define main example_main
#include "../additional_sources/ds/practice/queue with stack.cpp"
#undef main
#include <cassert>
#include <deque>
#include <random>
int main(){queue actual;std::deque<int> reference;std::mt19937 rng(42);
 for(int i=0;i<20000;++i){if(reference.empty()||rng()%2){int value=static_cast<int>(rng()%200)-100;actual.push(value);reference.push_back(value);}
  else{assert(actual.pop()==reference.front());reference.pop_front();}assert(actual.empty()==reference.empty());}
 while(!reference.empty()){assert(actual.pop()==reference.front());reference.pop_front();}assert(actual.empty());assert(actual.pop()==-1);}
