// Coursework completion repair; original local draft is retained.
#include <iostream>
#include <vector>
int main(){int size=0;std::cout<<"Enter array size: ";
 if(!(std::cin>>size)||size<1||size>10000){std::cerr<<"Invalid size\n";return 1;}
 std::vector<int> values(static_cast<std::size_t>(size));for(int& value:values)if(!(std::cin>>value)){std::cerr<<"Invalid value\n";return 1;}
 const long long sum=static_cast<long long>(values.front())+values.back();std::cout<<"First + last: "<<sum<<'\n';}
