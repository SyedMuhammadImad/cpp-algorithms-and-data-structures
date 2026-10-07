# Text-only document extract

Source document: Programing fundamentals assignment 3.docx

Images and layout omitted. Claims below are source text, not independently verified results.

Programing fundamentals assignment: 3



1:

#include <iostream>

using namespace std ;



int main() 

{

    cout<<"My ______";

    cout<<"_______ name ______";

    cout<<"______________is__(Imad)";

    return 0;

}

2:

#include <iostream>



using namespace std;



int main() {

    int n;

    cout << "Enter the number of rows for the diamond: ";

    cin >> n;

    

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {

            cout << " ";

        }

        for (int k = 1; k <= 2 * i - 1; k++) {

            cout << "*";

        }

        cout << endl;

    }



    for (int i = n - 1; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++) {

            cout << " ";

        }

        for (int k = 1; k <= 2 * i - 1; k++) {

            cout << "*";

        }

        cout << endl;

    }

    return 0;

}

3:

#include <iostream>



using namespace std;



int main() {

    int n = 5;



    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= 2 * i - 1; j++) {

            cout << "*";

        }

        cout << endl;

    }



    for (int i = 1; i <= 3; i++) {

        for (int j = 1; j <= 3; j++) {

            for (int k = 1; k <= 3; k++) {

                cout << "*";

            }

            cout << " ";

        }

        cout << endl;

    }



    return 0;

}



4:



5:

#include <iostream>

using namespace std;



int main() {

    int basenum;



    cout << "Enter the number you want to make a table of: ";

    cin >> basenum;



    for (int i = 0; i <= 10; i++) {

        int result = basenum * i;

        cout << basenum << " X " << i << " = " << result << endl;

    }



    return 0;

}



6:

#include <iostream>

using namespace std;



int main() {

    int a=50;

    int b=100;



    cout<<" The first variable is "<<a<<" The second variable is "<<b<<endl;

    return 0;

}



7:

#include <iostream>

using namespace std;



int main() {

    int you=20;

    int i=10;



    cout<<" I have "<<i<<" rupees and you have "<<you<<" rupees \n so we have enough money to buy coffee . Yahoo"<<endl;

    return 0;

}



8:

#include <iostream>

using namespace std;



int main() {

    int first,second,third;

    cout<<"Enter first no : ";

    cin>>first;

    cout<<"Enter second no : ";

    cin>>second;

    cout<<"Enter third no : ";

    cin>>third;



    int result1 = first / second;

    cout<<"first divid by second is :"<<result1<<endl;



    int result2 = result1 / third;

    cout<<"second division result is :"<<result2;



    return 0;

}



9:

#include <iostream>

#include <cmath>

using namespace std;



int main() {

    int X1= 20, X2= 20;

    int Y1= 30,Y2=30;



    cout<<" The value of x1 is : "<<X1<<" \n x2 is : "<<X2<<" and y1 is : "<<Y1<<"\n y2 is : "<<X2<<endl;



    int Xresult = (X2-X1)*(X2-X1);

    int Yresult = (Y2-Y1)*(Y2-Y1);

    int result = sqrt( Xresult + Yresult );



    cout<<"The square root of the values are : "<<result<<endl;



    return 0;

}

10:



