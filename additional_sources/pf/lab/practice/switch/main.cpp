// Coursework completion repair; original local draft is retained.
#include <iostream>
int main(){int rows=0;std::cout<<"Enter number of rows: ";
 if(!(std::cin>>rows)||rows<1||rows>100){std::cerr<<"Rows must be 1–100\n";return 1;}
 for(int i=1;i<=rows;++i){for(int j=0;j<i;++j)std::cout<<'*';std::cout<<'\n';}}
