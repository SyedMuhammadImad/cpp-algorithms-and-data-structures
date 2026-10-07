#include <iostream>

using namespace std;

int main()
{
    int userInput ;
    cout << "Enter a number :" << endl;
    if(!(cin >> userInput)){cerr<<"Invalid integer\n";return 1;}
    cout << " You entered a number "<< userInput<<endl;
    return 0;
}
