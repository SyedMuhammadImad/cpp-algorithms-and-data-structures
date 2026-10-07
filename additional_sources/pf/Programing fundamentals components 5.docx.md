# Text-only document extract

Source document: Programing fundamentals project 5.docx

Images and layout omitted. Claims below are source text, not independently verified results.

Programing fundamentals project #4

Code  1 :

#include <iostream>

#include <cmath>

using namespace std ;



void average(int n1 ,int n2 ,int n3 ,int n4 )

{

    int avg = ( n1 + n2 + n3 + n4 ) / 4 ;    

    cout<<"The average is : "<<avg<<endl;

    int sqavg = sqrt(avg);

    int stnd = (sqavg - avg)*(sqavg - avg);

    cout<<"The Standard Daviation is :"<<stnd<<endl;

}



int main()

{

    int num1,num2,num3,num4;

    cout<<"Enter four numbers : "<<endl;

    cin>>num1>>num2>>num3>>num4;

    average(num1,num2,num3,num4);

   

    return 0;

}

Code 2 :

#include <iostream>

#include <cmath>

using namespace std ;

// v is wind speed and t temperature //

void wind(float v ,float t )

{

    float w =13.12 + 0.6215*t - 11.37* pow(v,0.16) + 0.3965*t*pow(v,0.16) ;

    cout<<"Wind chill index in Celsius is : "<<w;

}

int main()

{

    int speed,temp;

    

    cout<<"enter the speed of the wind in meter per sec : ";

    cin>>speed;

    cout<<"enter the temperture in Celsius : ";

    cin>>temp;

    

    wind(speed,temp);

   

    return 0;

}

Code 3 :

#include <iostream>

#include <cmath>

using namespace std ;



void fact (int n) 

{

    int result = 1; 

    for ( int i=2 ; i<=n ; i++ )

    {

        result =result*i;

    }

    cout<<"the factorial is : "<<result<<endl;

}

int main()

{

    int num1;

    cout<<"Enter the number u want factorial of : ";

    cin>>num1;

    

    fact(num1);

    

    return 0;

}

Code 4:

#include <iostream>

#include <cmath>

using namespace std ;



void force(int n1,int n2,int dd2) 

{

    float G = 6.673*(10*(-8)) / 9.80 ;

    float F = G*n1*n2 / (dd2*dd2);

    cout<<"The gravitional force between the bodies is : "<<F<<endl;

}

int main()

{

    int m1,m2,d2;

    cout<<"enter the mass of first body : ";

    cin>>m1;

    cout<<"enter the mass of second body : ";

    cin>>m2;

    cout<<"enter the distance between the bodies : ";

    cin>>d2;

    force(m1,m2,d2);

    

    return 0;

}

Code 5:

#include <iostream>

#include <cmath>



using namespace std;



bool LeapYear(int year)

{

    return (year %4==0 && year %100!=0) || (year % 400 == 0);





}

int DayNumberInYear (int day , int month ,int year )

{

    int daysInMonths[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};



    if (LeapYear(year)){

        daysInMonths[2] = 29;

    }

    int dayNumber =0 ;

    for(int i=1 ; i<month ; i++){

        dayNumber +=daysInMonths[i];

    }

    dayNumber += day;

    return dayNumber;

}





int main() {

    int day, month, year;



    cout<<"Enter a date (dd/mm/yyyy): ";

    cin>>day>>month>>year;



    int result = DayNumberInYear(day, month, year);



    cout<<"The day number for "<<day<<"/"<<month<<"/"<<year<<" is: "<<result<<endl;



    return 0;

}

Code 6 :

#include <iostream>

#include <cmath>



using namespace std;



void calculateCharges(float charge,float Acharge,float Mcharge )

{

    int hours;

    cout<<"Enter the hours car has been parked : ";

    cin>>hours ;



    if (hours<0)

    {

            cout<<"Enter valid hours"<<endl;

            return ;

    }



    float totalcharge = charge + (hours*Acharge);

    totalcharge = min(totalcharge,Mcharge);



    cout<<"The total charge is: "<<totalcharge<<endl;

}



int main()

{

    float charge = 2.00;

    float Acharge = 0.50;

    float Mcharge = 10.00;

    calculateCharges(charge,Acharge,Mcharge);



    return 0;

}



