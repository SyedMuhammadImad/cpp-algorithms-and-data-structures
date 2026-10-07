// project completion repair; original local draft is retained.
#include <iostream>
#include <array>
int main(){const std::array<int,10> values={22,32,41,53,39,42,57,71,43,93};int target=0;
 std::cout<<"Enter search target: ";if(!(std::cin>>target)){std::cerr<<"Invalid target\n";return 1;}
 for(std::size_t i=0;i<values.size();++i)if(values[i]==target){std::cout<<"Found at index "<<i<<'\n';return 0;}
 std::cout<<"Not found\n";}
