// Completed project variant; input/edge-case repair.
#include <iostream>
#include <iomanip>
int main(){int sum=0;std::cout<<"Enter marks for five subjects (0–100 each): ";
 for(int i=0;i<5;++i){int mark=0;if(!(std::cin>>mark)||mark<0||mark>100){std::cerr<<"Invalid mark\n";return 1;}sum+=mark;}
 std::cout<<"Aggregate: "<<sum<<"\nPercentage: "<<std::fixed<<std::setprecision(2)<<sum/5.0<<"%\n";}
