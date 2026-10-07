// Completed project; empty, singleton, capacity and input boundaries repaired.
#include <iostream>
#include <array>
#include <stdexcept>
class queue{
 std::array<int,20> values{};std::size_t front=0,count=0;
public:
 bool push(int value){if(count==values.size())return false;values[(front+count)%values.size()]=value;++count;return true;}
 bool pop(){if(!count)return false;front=(front+1)%values.size();--count;return true;}
 int peek()const{if(!count)throw std::underflow_error("Queue is empty");return values[front];}
 bool isEmpty()const{return count==0;}
};
int main(){queue q;q.push(1);q.push(2);std::cout<<q.peek()<<'\n';q.pop();std::cout<<q.peek()<<'\n';q.pop();std::cout<<q.isEmpty()<<'\n';}
