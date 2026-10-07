#include <iostream>
int main(){int value=0;std::cout<<"Enter an integer: ";if(!(std::cin>>value)){std::cerr<<"Invalid integer\n";return 1;}
 std::cout<<"Multiplied by two: "<<static_cast<long long>(value)*2<<'\n';return 0;}
