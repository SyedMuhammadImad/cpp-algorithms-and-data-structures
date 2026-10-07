# Text-only document extract

Source document: pf task.docx

Images and layout omitted. Claims below are source text, not independently verified results.

#include <iostream>

using namespace std;

int main()

{

    int sizze;

    cout<<"enter the size for the array. "<<endl;

    cin>>sizze;

    int values[sizze];

    for(int i=0; i<sizze; i++)

    {

        cin>>values[i];

    }

    int product = 1;

    for(int i=0; i<sizze; i++)

    {

        product = product * values[i];

    }

    cout<<"The product of the array is: ";

    for (int i=0; i<sizze; i++)

    {

    cout << values[i];

    if (i < sizze - 1)

        cout << " x ";

    }

    cout << " = " << product << endl;

 

return 0;

}

049491900