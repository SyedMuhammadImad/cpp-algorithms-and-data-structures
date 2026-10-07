// Completed coursework variant; input/edge-case repair.
#include <iostream>
#include <iomanip>
#include <cmath>
// Toy billing arithmetic: fixed sample prices/tax, no real pharmacy or medicine advice.
int main(){const double prices[]={10,15,70,20};int choice=0,quantity=0;double discount=0;
 std::cout<<"1. Panadol\n2. Desprin\n3. Koftix\n4. PanadolExtra\nChoice, quantity, fixed-amount discount: ";
 if(!(std::cin>>choice>>quantity>>discount)||choice<1||choice>4||quantity<1||quantity>10000||!std::isfinite(discount)||discount<0){std::cerr<<"Invalid order\n";return 1;}
 const double gross=prices[choice-1]*quantity*1.20;if(discount>gross){std::cerr<<"Discount exceeds bill\n";return 1;}
 std::cout<<std::fixed<<std::setprecision(2)<<"Total bill: "<<gross-discount<<'\n';}
