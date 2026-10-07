// Completed coursework variant; input/edge-case repair.
#include <iostream>
#include <iomanip>
#include <cmath>
int main(){double sale=0,profit=0;std::cout<<"Selling price of 15 items and total profit: ";
 if(!(std::cin>>sale>>profit)||!std::isfinite(sale)||!std::isfinite(profit)||sale<0||profit<0||profit>sale){std::cerr<<"Require 0 <= profit <= selling price\n";return 1;}
 std::cout<<std::fixed<<std::setprecision(2)<<"Cost per item: "<<(sale-profit)/15<<'\n';}
