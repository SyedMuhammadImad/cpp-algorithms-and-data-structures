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
