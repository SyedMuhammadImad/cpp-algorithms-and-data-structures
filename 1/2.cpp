// Coursework completion repair; original local draft is retained.
#include <iostream>
#include <iomanip>
int main(){
 const double meal=44.50, tax=meal*.0675, tip=(meal+tax)*.15;
 std::cout<<std::fixed<<std::setprecision(2)<<"Meal: "<<meal<<"\nTax: "<<tax<<"\nTip on after-tax amount: "<<tip<<"\nTotal: "<<meal+tax+tip<<"\n";
}
