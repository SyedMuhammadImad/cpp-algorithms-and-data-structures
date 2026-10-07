// project completion repair; original local draft is retained.
#include <iostream>
int main(){const int rows=5;for(int level=1;level<2*rows;++level){
 const int width=level<=rows?level:2*rows-level;
 for(int j=0;j<rows-width;++j)std::cout<<' ';
 for(int j=0;j<2*width-1;++j)std::cout<<'*';std::cout<<'\n';}}
