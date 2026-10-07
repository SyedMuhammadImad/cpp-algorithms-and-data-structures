// Coursework completion repair; original local draft is retained.
#include <iostream>
int main(){int age=0;std::cout<<"Tell me your age: ";
 if(!(std::cin>>age)||age<0||age>150){std::cerr<<"Invalid age\n";return 1;}
 switch(age){case 18:std::cout<<"You are 18\n";break;case 22:std::cout<<"You are 22\n";break;
 default:std::cout<<(age<18?"You are under age\n":"No special case\n");}}
