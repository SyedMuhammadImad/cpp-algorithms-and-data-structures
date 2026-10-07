# Text-only document extract

Source document: Programing Assignment.docx

Images and layout omitted. Claims below are source text, not independently verified results.

PF ASSIGNEMENT NO # 01 

PROGRAM # 01

#include <iostream>



using namespace std;



int main()

{

    int number;

    cout << "enter a number";

    cin>> number ;

    cout<< "you entered:" << number << endl;



    return 0;

}

PROGRAM # 02 



#include <iostream>

using namespace std;



int main()

{

   int number;

   cout<< "enter a number ";

   cin >> number ;



   int doubleNumber = number*2;



    cout << "the double number is :" << doubleNumber << endl;



        return 0;

}



PROGRAM # 03

#include <iostream>



using namespace std;



int main()

{

   int number ;

   cout << "enter a number ";

   cin >> number ;



   int square = number * number ;



   cout << "the square of" << number << "is:" << square << endl;



        return 0;

}



PROGRAM # 04 

#include <iostream>



using namespace std;



int main()

{

  int num1,num2;

  cout << "enter the first number";

  cin >>num1;

  cout << "enter the second number ";

  cin >> num2;



  int sum = num1 + num2 ;

  cout << "the sum of "<< num1 << "and "<< num2 << "is:"<< sum << endl;



        return 0;

}



PROGRAM # 05

#include <iostream>



using namespace std;



int main()

{

    float basicsalary,da,hra,grosssalary;



    // read the value of basic salary

    cout << "enter ramesh's basic salary:";

    cin >> basicsalary;



 

    da=0.4* basicsalary;



    

    hra=0.2* basisalary;



    

    grosssalary=basicsalary + da + hra;



    

    cout << "ramesh's gross salary is:"<< grosssalary<<endl;



    return 0;

}

PROGRAM # 06

#include <iostream>

using namespace std;



int main() {

    float distanceKm, distanceM, distanceFt, distanceIn, distanceCm;



    

    cout << "Enter the distance between the two cities (in km): ";

    cin >> distanceKm;



    distanceM = distanceKm * 1000;



    distanceFt = distanceKm * 3280.84;



    distanceIn = distanceKm * 39370.1;



  distanceCm = distanceKm * 100000;



   

    cout << "Distance in meters: " << distanceM << endl;

    cout << "Distance in feet: " << distanceFt << endl;

    cout << "Distance in inches: " << distanceIn << endl;

    cout << "Distance in centimeters: " << distanceCm << endl;



    return 0;

}

PROGRAM # 07

#include <iostream>

using namespace std;



int main() {

    int marks1, marks2, marks3, marks4, marks5;

    float totalMarks, averageMarks;



   

    cout << "Enter the marks obtained in subject 1: ";

    cin >> marks1;

    cout << "Enter the marks obtained in subject 2: ";

    cin >> marks2;

    cout << "Enter the marks obtained in subject 3: ";

    cin >> marks3;

    cout << "Enter the marks obtained in subject 4: ";

    cin >> marks4;

    cout << "Enter the marks obtained in subject 5: ";

    cin >> marks5;



   

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;

    averageMarks = totalMarks / 5;



    

    cout << "The total average marks in all subjects is: " << averageMarks << endl;



    return 0;

}

PROGRAM # 08

#include <iostream>

using namespace std;



int main() {

    float fahrenheit, celsius;



    

    cout << "Enter the temperature in Fahrenheit: ";

    cin >> fahrenheit;



    

    celsius = (fahrenheit - 32) * 5 / 9;



    

    cout << "The temperature in Celsius is: " << celsius << "°C" << endl;



    return 0;

}

PROGRAM # 09

#include <iostream>

using namespace std;



int main() {

    float length, breadth, radius;

    const float pi = 3.14159;



    

    cout << "Enter the length of the rectangle: ";

    cin >> length;

    cout << "Enter the breadth of the rectangle: ";

    cin >> breadth;



    

    float rectangleArea = length * breadth;

    float rectanglePerimeter = 2 * (length + breadth);



    

   cout << "Enter the radius of the circle: ";

    cin >> radius;



    

    float circleArea = pi * radius * radius;

    float circleCircumference = 2 * pi * radius;



    

    cout << "Area of the rectangle: " << rectangleArea << endl;

    cout << "Perimeter of the rectangle: " << rectanglePerimeter << endl;

    cout << "Area of the circle: " << circleArea << endl;

    cout << "Circumference of the circle: " << circleCircumference << endl;



    return 0;

}

PROGRAM # 10

#include <iostream>

using namespace std;



int main() {

    float totalSellingPrice, totalProfit;

    float costPricePerItem;



    

    cout << "Enter the total selling price of 15 items: ";

    cin >> totalSellingPrice;



    

    cout << "Enter the total profit earned on those 15 items: ";

    cin >> totalProfit;



   costPricePerItem = (totalSellingPrice - totalProfit) / 15;



   cout << "The cost price of one item is: " << costPricePerItem << endl;



    return 0;

}



