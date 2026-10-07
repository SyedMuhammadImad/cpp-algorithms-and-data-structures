// project completion repair; original local draft is retained.
#include <iostream>
#include <vector>
#include <limits>
int main(){int size=0;std::cout<<"Enter array size: ";
 if(!(std::cin>>size)||size<1||size>1000){std::cerr<<"Invalid size\n";return 1;}
 std::vector<long long> values(static_cast<std::size_t>(size));for(auto& value:values)if(!(std::cin>>value)){std::cerr<<"Invalid value\n";return 1;}
 // Check the integer result before multiplying, including LLONG_MIN * -1.
 long long product=1;
 for(auto value:values){
  const auto lo=std::numeric_limits<long long>::min(),hi=std::numeric_limits<long long>::max();
  if((product>0&&((value>0&&product>hi/value)||(value<0&&value<lo/product)))||
     (product<0&&((value>0&&product<lo/value)||(value<0&&product<hi/value)))){std::cerr<<"Product overflow\n";return 1;}
  product*=value;
 }
 for(std::size_t i=0;i<values.size();++i){if(i)std::cout<<" x ";std::cout<<values[i];}std::cout<<" = "<<product<<'\n';}
