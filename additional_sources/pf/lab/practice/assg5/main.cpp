// Completed coursework variant; input/edge-case repair.
#include <iostream>
#include <stdexcept>
bool LeapYear(int y){return y%4==0&&(y%100!=0||y%400==0);}
int DayNumberInYear(int day,int month,int year){int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 if(year<1||year>9999||month<1||month>12)throw std::invalid_argument("Invalid year/month");if(LeapYear(year))days[2]=29;
 if(day<1||day>days[month])throw std::invalid_argument("Invalid day");int result=day;for(int i=1;i<month;++i)result+=days[i];return result;}
int main(){int d=0,m=0,y=0;std::cout<<"Enter day month year as three space-separated integers: ";if(!(std::cin>>d>>m>>y)){std::cerr<<"Invalid date input\n";return 1;}
 try{std::cout<<"Day number: "<<DayNumberInYear(d,m,y)<<'\n';}catch(const std::invalid_argument& error){std::cerr<<error.what()<<'\n';return 1;}}
