#include <iostream>
int main(){int value=0;std::cout<<"Enter an integer: ";if(!(std::cin>>value)){std::cerr<<"Invalid integer\n";return 1;}
 std::cout<<"Square: "<<static_cast<long long>(value)*value<<'\n';return 0;}
