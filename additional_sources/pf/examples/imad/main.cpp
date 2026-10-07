// Completed project variant; input/edge-case repair.
#include <iostream>
int main(){int number=0;do{std::cout<<"Enter an integer between 1 and 10: ";if(!(std::cin>>number)){std::cerr<<"Invalid integer\n";return 1;}
 if(number<1||number>10)std::cout<<"Outside range\n";}while(number<1||number>10);
 for(int i=1;i<=10;++i)std::cout<<number<<" * "<<i<<" = "<<number*i<<'\n';}
