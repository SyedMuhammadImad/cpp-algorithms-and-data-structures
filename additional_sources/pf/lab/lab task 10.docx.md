# Text-only document extract

Source document: lab task 10.docx

Images and layout omitted. Claims below are source text, not independently verified results.





66738514414500



66738560579000PROGRAMMING FUNDAMENTALS



LAB 10.0



Lab Instructor: Jawad Hassan

 Department of Artificial Intelligence 

Email: jawad.hasan@umt.edu.pk



3505200149206

















































SESSION: 2023

SEMESTER: 1ST



CLO 4

Objective(s):

To Understand about:

1289685170180Apply Arrays in C++Use of One Dimesional Array00Apply Arrays in C++Use of One Dimesional Array

Apply Arrays in C++

Use of One Dimesional Array

Apply Arrays in C++

Use of One Dimesional Array



INTRODUCTION:

An array works like a variable that can store a group of values, all of the same type. The values are stored together in consecutive memory locations. Here is a definition of an array of integers:





 int days[6];

189738019875500

The name of this array is days. The number inside the brackets is the array’s size declarator. It indicates the number of elements, or values, the array can hold. The days array can store six elements, each one an integer.



An array’s size declarator must be a constant integer expression with a value greater than zero. It can be either a literal, as in the previous example, or a named constant, as shown in the following:

1125220177800const int NUM_DAYS = 6; int days[NUM_DAYS];00const int NUM_DAYS = 6; int days[NUM_DAYS];

const int NUM_DAYS = 6; int days[NUM_DAYS];

const int NUM_DAYS = 6; int days[NUM_DAYS];





Arrays of any data type can be defined. The following are all valid array definitions:



1125220185420float temperatures[100]; // Array of 100 floats char name[41]; // Array of 41 characters long units[50]; // Array of 50 long integers double sizes[1200];// Array of 1200 doubles00float temperatures[100]; // Array of 100 floats char name[41]; // Array of 41 characters long units[50]; // Array of 50 long integers double sizes[1200];// Array of 1200 doubles

float temperatures[100]; // Array of 100 floats char name[41]; // Array of 41 characters long units[50]; // Array of 50 long integers double sizes[1200];

// Array of 1200 doubles

float temperatures[100]; // Array of 100 floats char name[41]; // Array of 41 characters long units[50]; // Array of 50 long integers double sizes[1200];

// Array of 1200 doubles





The following statement stores the integer 30 in hours[3].





hours[3] = 30;

119951520129500



Example:











Program Output:



Even though the size declarator of an array definition must be a constant or a literal, subscript numbers can be stored in variables. This makes it possible to use a loop to “cycle through” an entire array, performing the same operation on each element. For example, look at the following code:



1125220188595const int ARRAY_SIZE = 5; int numbers[ARRAY_SIZE];for (int count = 0; count < ARRAY_SIZE; count++) numbers[count]= 99;00const int ARRAY_SIZE = 5; int numbers[ARRAY_SIZE];for (int count = 0; count < ARRAY_SIZE; count++) numbers[count]= 99;

const int ARRAY_SIZE = 5; int numbers[ARRAY_SIZE];

for (int count = 0; count < ARRAY_SIZE; count++) numbers[count]

= 99;

const int ARRAY_SIZE = 5; int numbers[ARRAY_SIZE];

for (int count = 0; count < ARRAY_SIZE; count++) numbers[count]

= 99;



This code first defines a constant int named ARRAY_SIZE and initializes it with the value 5. Then it defines an int array named numbers, using ARRAY_SIZE as the size declarator. As a result, the numbers array will have five elements. The for loop uses a counter variable named count. This loop will iterate five times, and during the loop iterations the count variable will take on the values 0 through 4.



Example:

205740018986500





Dry Run:





1. Sum of Array Elements:

Create an array of integers and calculate the sum of all elements in the array. Print the result to the console.

Code:

#include <iostream>

using namespace std;

int main()

{

    int arr[6]={3,6,4,3,10,18};

    int sum=0;

    for(int i=0;i<=6;i++)

    {

        sum=sum+arr[i];

    }

    cout<<"Sum of element is = "<<sum;

  return 0;

}

Output















2. Find Maximum and Minimum Values:

Declare an array of integers and write a program to find both the maximum and minimum values in the array. Display these values

Code:

#include <iostream>

using namespace std;

int main()

{

    int arr[5]={1,2,3,4,5};

    int maxi=arr[0];

    int mini=arr[0];

    for(int i=0;i<5;i++)

    {

        maxi=max(maxi,arr[i]);

        mini=min(mini,arr[i]);

    }

    cout<<"your maximum number is = "<<maxi<<endl;

    cout<<"your minimum number is = "<<mini<<endl;

  return 0;

}

Output:













3.Find Size of Array

create a program to calculate sized of array

code:

#include <iostream>

using namespace std;

int main()

{

    int arr[4]={5,4,3,2};

    cout<<"Sized of Array element is = "<<sizeof(arr)/4;

  return 0;

}

Output:



















4. Array Reversal:

Create an array of characters to store a word. Write a program that reverses the word in the array and then prints the reversed word.





5. Search for an Element:

Declare an array of floating-point numbers and ask the user to enter a value to search for. Write a program to determine if the value exists in the array and, if so, at which index.





6. Find Even Number:

Create an array of integers and find even number. Print the number array to the console.

Code:

#include <iostream>

using namespace std;

int main()

{

    int arr[5]={1,2,3,4,5};

    cout<<"Even number is"<<endl;

     for(int i=0;i<=4;i++)

    {

       if(arr[i]%2==0)

       cout<<arr[i]<<" ";

    }

  return 0;

}

Output:





































center4500452120Lab 10.0: 1 D-Array1000002700Lab 10.0: 1 D-Array

Lab 10.0: 1 D-Array

Lab 10.0: 1 D-Array







