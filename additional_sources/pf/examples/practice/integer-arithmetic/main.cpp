// Completed project variant; input/edge-case repair.
#include <iostream>
#include <limits>
int main(){int a=0,b=0;std::cout<<"Enter two integers: ";if(!(std::cin>>a>>b)){std::cerr<<"Invalid integers\n";return 1;}
 std::cout<<"Sum: "<<static_cast<long long>(a)+b<<"\nDifference: "<<static_cast<long long>(a)-b<<'\n';
 if(b==0){std::cerr<<"Division by zero\n";return 1;}
 const long long x=a,y=b;std::cout<<"Integer quotient: "<<x/y<<"\nRemainder: "<<x%y<<'\n';}
