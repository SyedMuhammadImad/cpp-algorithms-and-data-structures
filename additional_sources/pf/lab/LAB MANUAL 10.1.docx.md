# Text-only document extract

Source document: LAB MANUAL 10.1.docx

Images and layout omitted. Claims below are source text, not independently verified results.



66738514414500



66738560579000PROGRAMMING FUNDAMENTALS



LAB 10.1



Lab Instructor: Jawad Hassan

 Department of Artificial Intelligence 

Email: jawad.hasan@umt.edu.pk



3505200149206















































SESSION: 2023

SEMESTER: 1ST



Introduction

A two-dimensional array in C++ is the simplest form of a multidimensional array. It can be visualized as an array of arrays. The image below depicts a two-dimensional array.





2D Array Representation



A two-dimensional array is also called a matrix. It can be of any type like integer, character, float, etc. depending on the initialization. In the next section, we are going to discuss how we can initialize 2D arrays.

Initializing a 2D array in C++

So, how do we initialize a two-dimensional array in C++? As simple as this:

int arr[4][2] = {{1234, 56},{1212, 33},{1434, 80},{1312, 78}} ;

Copy

So, as you can see, we initialize a 2D array arr, with 4 rows and 2 columns as an array of arrays. Each element of the array is yet again an array of integers.

We can also initialize a 2D array in the following way.

int arr[4][2] = {1234, 56, 1212, 33, 1434, 80, 1312, 78};



Copy

In this case too, arr is a 2D array with 4 rows and 2 columns.

Example 1: (with row and column size mentioned)

int a[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};





Example 2: (with only column size mentioned)

int a[][3]= {{15,27,36}, {41,52,64}, {79,87,93}};





Example 3: (1st cell contains the value 5 and, rest of the cells 0)

int a[3][3]= {{5},{0},{0}};





Example 4: (1st cell of each row contains the value 5 and, rest of the cells 0)

int a[3][3]= {{5},{5},{5}};





Example 5: (All cell contains the value 0)

int a[3][3]= {{0},{0},{0}};



Printing a 2D Array in C++

We are done initializing a 2D array, now without actually printing the same, we cannot confirm that it was done correctly.

Also, in many cases, we may need to print a resultant 2D array after performing some operations on it. So how do we do that?

The code below shows us how we can do that.

#include<iostream>

using namespace std; 

main( ) 

{  

int arr[4][2] = {

{ 10, 11 },

{ 20, 21 },

{ 30, 31 },

{ 40, 41 }

} ;



int i,j;



cout<<"Printing a 2D Array:\n";

for(i=0;i<4;i++)

{

for(j=0;j<2;j++)

{

cout<<"\t"<<arr[i][j];

}

cout<<endl;

}

}



Output:

Printing A 2D Array

In the above code,

We firstly initialize a 2D array, arr[4][2] with certain values,

After that, we try to print the respective array using two for loops,

the outer for loop iterates over the rows, while the inner one iterates over the columns of the 2D array,

So, for each iteration of the outer loop, i increases and takes us to the next 1D array. Also, the inner loop traverses over the whole 1D array at a time,

And accordingly, we print the individual element arr[ i ][ j ].

Taking 2D Array Elements As User Input

Previously, we saw how we can initialize a 2D array with pre-defined values. But we can also make it a user input too. Let us see how

#include<iostream>

using namespace std;



int main() {

    int s[2][2];

    int i, j;

    cout << "\n2D Array Input:\n";

    for (i = 0; i < 2; i++) {

        for (j = 0; j < 2; j++) {

            cout << "\ns[" << i << "][" << j << "]=  ";

            cin >> s[i][j];

        }

    }



    cout << "\nThe 2-D Array is:\n";

    for (i = 0; i < 2; i++) {

        for (j = 0; j < 2; j++) {

            cout << "\t" << s[i][j];

        }

        cout << endl;

    }

    return 0;

}



Output:

2D Array User Input

For the above code, we declare a 2X2 2D array s. Using two nested for loops we traverse through each element of the array and take the corresponding user inputs. In this way, the whole array gets filled up, and we print out the same to see the results.

Matrix Addition using Two Dimensional Arrays in C++

As an example let us see how we can use 2D arrays to perform matrix addition and print the result.

#include<iostream>

using namespace std;



int main() {

    int m1[5][5], m2[5][5], m3[5][5];

    int i, j, r, c;



    cout << "Enter the number of rows of the matrices to be added (max 5): ";

    cin >> r;

    cout << "Enter the number of columns of the matrices to be added (max 5): ";

    cin >> c;



    cout << "\n1st Matrix Input:\n";

    for (i = 0; i < r; i++) {

        for (j = 0; j < c; j++) {

            cout << "\nmatrix1[" << i << "][" << j << "] = ";

            cin >> m1[i][j];

        }

    }



    cout << "\n2nd Matrix Input:\n";

    for (i = 0; i < r; i++) {

        for (j = 0; j < c; j++) {

            cout << "\nmatrix2[" << i << "][" << j << "] = ";

            cin >> m2[i][j];

        }

    }



    cout << "\nAdding Matrices...\n";



    for (i = 0; i < r; i++) {

        for (j = 0; j < c; j++) {

            m3[i][j] = m1[i][j] + m2[i][j];

        }

    }



    cout << "\nThe resultant Matrix is:\n";



    for (i = 0; i < r; i++) {

        for (j = 0; j < c; j++) {

            cout << "\t" << m3[i][j];

        }

        cout << endl;

    }



    return 0;

}



Output:















Lab task:

Code:

#include<iostream>

using namespace std;



int main(){

    int rows ,columns ;

    cout<<"Enter the number of rows :";cin>> rows;

    cout <<"Enter the number of columns :";cin>>columns;

    int arr[rows][columns];

    for (int i=0; i<rows ;i++){

    for (int j =0; j<columns; j++){

    cout<<"Enter the values of array["<<i<<"]["<<i<<"] : ";cin>>arr[i][j];

}

    cout<<endl;

}

for (int i=0; i<rows ;i++){

    for (int j =0; j<columns; j++){

    cout << arr[i][j]<<" ";

}

cout<<endl;

    }

}

Output





center4500452120LAB 10.1  2D-Array1000002700LAB 10.1  2D-Array

LAB 10.1  2D-Array

LAB 10.1  2D-Array















