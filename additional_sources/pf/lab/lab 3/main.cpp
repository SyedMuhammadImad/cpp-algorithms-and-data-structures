// Completed coursework variant; input/edge-case repair.
#include <iostream>
#include <iomanip>
#include <cmath>
// Adult BMI arithmetic/categories: https://www.cdc.gov/bmi/adult-calculator/bmi-categories.html
int main(){double weight=0,height=0;int age=0;std::cout<<"Age (20+), weight (kg), height (meters): ";
 if(!(std::cin>>age>>weight>>height)||age<20||age>150||!std::isfinite(weight)||!std::isfinite(height)||weight<=0||weight>1000||height<=0||height>3){std::cerr<<"Invalid adult input\n";return 1;}
 const double bmi=weight/(height*height);if(!std::isfinite(bmi)){std::cerr<<"Calculation overflow\n";return 1;}
 std::cout<<std::fixed<<std::setprecision(2)<<"BMI: "<<bmi<<"\nCategory: "<<(bmi<18.5?"Underweight":bmi<25?"Healthy weight":bmi<30?"Overweight":"Obesity")<<"\nBMI is a screening measure, not a diagnosis.\n";}
