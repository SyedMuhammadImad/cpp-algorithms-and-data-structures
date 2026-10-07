# Text-only document extract

Source document: LAB MANUAL 5.docx

Images and layout omitted. Claims below are source text, not independently verified results.



66738514414500



66738560579000PROGRAMMING FUNDAMENTALS



LAB 05



Lab Instructor: Jawad Hassan

 Department of Artificial Intelligence 

Email: jawad.hasan@umt.edu.pk



3505200149206

















































SESSION: 2023

SEMESTER: 1ST



Objective(s): Upon completion of this lab session, learners will be able to:

1424940162560Apply Loops in C++Use of For Loop in C++00Apply Loops in C++Use of For Loop in C++

Apply Loops in C++

Use of For Loop in C++

Apply Loops in C++

Use of For Loop in C++



The increment and decrement operators

++ and -- are operators that add and subtract 1 from their operands. To increment a value means to increase it by one, and to decrement a value means to decrease it by one. Both of the following statements increment the variable num:

num = num + 1; num

+= 1;

And num is decremented in both of the following statements:



num = num - 1; num

= 1;

C++ provides a set of simple unary operators designed just for incrementing and decrementing variables. The increment operator is ++ and the decrement operator is --. The following statement uses the ++ operator to increment num: num++; And the following statement decrements num: num--; Example:

1123950111125// This program demonstrates the ++ and -- operators. #include <iostream>using namespace std; int main(){int num=4;// Display the value in num. cout << "The variable num is " << num << endl; cout << "I will now increment num.\n\n"; // Use postfix++ to increment num. num++;cout << "Now the variable num is " << num << endl; cout << "I will increment num again.\n\n";// Use prefix ++ to increment num.++num;cout << "Now the variable num is " << num << endl; cout << "I will now decrement num.\n\n";// Use postfix -- to decrement num. num--;cout << "Now the variable num is " << num << endl; cout << "I will decrement num again.\n\n";}00// This program demonstrates the ++ and -- operators. #include <iostream>using namespace std; int main(){int num=4;// Display the value in num. cout << "The variable num is " << num << endl; cout << "I will now increment num.\n\n"; // Use postfix++ to increment num. num++;cout << "Now the variable num is " << num << endl; cout << "I will increment num again.\n\n";// Use prefix ++ to increment num.++num;cout << "Now the variable num is " << num << endl; cout << "I will now decrement num.\n\n";// Use postfix -- to decrement num. num--;cout << "Now the variable num is " << num << endl; cout << "I will decrement num again.\n\n";}

// This program demonstrates the ++ and -- operators. #include <iostream>

using namespace std; int main()

{int num=4;

// Display the value in num. 

cout << "The variable num is " << num << endl; 

cout << "I will now increment num.\n\n"; // Use postfix

++ to increment num. num++;

cout << "Now the variable num is " << num << endl; cout << "I will increment num again.\n\n";

// Use prefix ++ to increment num.

++num;

cout << "Now the variable num is " << num << endl; cout << "I will now decrement num.\n\n";



// Use postfix -- to decrement num. num--;

cout << "Now the variable num is " << num << endl; cout << "I will decrement num again.\n\n";

}



// This program demonstrates the ++ and -- operators. #include <iostream>

using namespace std; int main()

{int num=4;

// Display the value in num. 

cout << "The variable num is " << num << endl; 

cout << "I will now increment num.\n\n"; // Use postfix

++ to increment num. num++;

cout << "Now the variable num is " << num << endl; cout << "I will increment num again.\n\n";

// Use prefix ++ to increment num.

++num;

cout << "Now the variable num is " << num << endl; cout << "I will now decrement num.\n\n";



// Use postfix -- to decrement num. num--;

cout << "Now the variable num is " << num << endl; cout << "I will decrement num again.\n\n";

}





Program Output:

The variable num is 4 I will now increment num. Now the variable num is 5 I will increment num again. Now the variable num is 6 I will now decrement num. Now the variable num is 5 I will decrement num again.Now the variable num is 4The variable num is 4 I will now increment num. Now the variable num is 5 I will increment num again. Now the variable num is 6 I will now decrement num. Now the variable num is 5 I will decrement num again.Now the variable num is 4

The variable num is 4 I will now increment num. Now the variable num is 5 I will increment num again. Now the variable num is 6 I will now decrement num. Now the variable num is 5 I will decrement num again.

Now the variable num is 4

The variable num is 4 I will now increment num. Now the variable num is 5 I will increment num again. Now the variable num is 6 I will now decrement num. Now the variable num is 5 I will decrement num again.

Now the variable num is 4





The Difference between Postfix and Prefix Modes:

In the simple statements used in Program 5-1, it doesn’t matter if the increment or decrement operator is used in postfix or prefix mode. The difference is important, however, when these operators are used in statements that do more than just incrementing or decrementing. For example, look at the following lines:

num = 4;

cout << num++;



This cout statement is doing two things: (1) displaying the value of num, and (2) incrementing num. But which happens first? cout will display a different value if num is incremented first than if num is incremented last. The answer depends on the mode of the increment operator. Postfix mode causes the increment to happen after the value of the variable is used in the expression. In the example, cout will display 4, then num will be incremented to 5. Prefix mode, however, causes the increment to happen first. In the following statements, num will be incremented to 5, then cout will display 5:

num = 4;

cout << ++num;



Loops:

A loop is part of a program that repeats. Before introduced the concept of control structures, which direct the flow of a program. A loop is a control structure that causes a statement or group of statements to repeat. C++ has three looping control structures: the while loop, the do-while loop, and the for loop. The difference between these structures is how they control the repetition.





The for Loop:

The for loop is ideal for performing a known number of iterations. A count-controlled loop must possess three elements:

It must initialize a counter variable to a starting value.

It must test the counter variable by comparing it to a maximum value. When the counter variable reaches its maximum value, the loop terminates.

It must update the counter variable during each iteration. This is usually done by incrementing the variable.

Here is the format of the for loop when it is used to repeat a single statement:

1240790212090for (initialization; test;update)00for (initialization; test;update)

for (initialization; test;

update)

for (initialization; test;

update)



2428875352869500The format of the for loop when it is used to repeat a block is

1263650136525for (initialization; test; update){statement; statement;// Place as many statements here// as necessary.}00for (initialization; test; update){statement; statement;// Place as many statements here// as necessary.}

for (initialization; test; update)

{

statement; statement;

// Place as many statements here

// as necessary.

}

for (initialization; test; update)

{

statement; statement;

// Place as many statements here

// as necessary.

}



115252514541500

Flow Diagram:





// This program displays the numbers 1 through 10 and// their squares. #include <iostream> using namespace std;int main(){int num;cout << "Number Number Squared\n"; cout << "\n";for (num = 1; num <= 10; num++)cout << num << "\t\t" << (num * num) << endl; return 0;}// This program displays the numbers 1 through 10 and// their squares. #include <iostream> using namespace std;int main(){int num;cout << "Number Number Squared\n"; cout << "\n";for (num = 1; num <= 10; num++)cout << num << "\t\t" << (num * num) << endl; return 0;}

// This program displays the numbers 1 through 10 and

// their squares. #include <iostream> using namespace std;



int main()

{

int num;

cout << "Number Number Squared\n"; cout << "\n";

for (num = 1; num <= 10; num++)

cout << num << "\t\t" << (num * num) << endl; 

return 0;

}

// This program displays the numbers 1 through 10 and

// their squares. #include <iostream> using namespace std;



int main()

{

int num;

cout << "Number Number Squared\n"; cout << "\n";

for (num = 1; num <= 10; num++)

cout << num << "\t\t" << (num * num) << endl; 

return 0;

}

Program Output:

Number Number Squared------------------------- 11243941652563674986498110   100Number Number Squared------------------------- 11243941652563674986498110   100



Number Number Squared

------------------------- 11

24

39

416

525

636

749

864

981

10   100



Number Number Squared

------------------------- 11

24

39

416

525

636

749

864

981

10   100



Nested Loop:

A loop that is inside another loop is called a nested loop.

// This program averages test scores. It asks the user for the// number of students and the number of test scores per student. #include <iostream>#include <iomanip> using namespace std;Int main(){int numStudents, // Number of students numTests; // Number of tests per student double total, // Accumulator for total scores double total, // Accumulator for total scores// This program averages test scores. It asks the user for the// number of students and the number of test scores per student. #include <iostream>#include <iomanip> using namespace std;Int main(){int numStudents, // Number of students numTests; // Number of tests per student double total, // Accumulator for total scores double total, // Accumulator for total scores

// This program averages test scores. It asks the user for the

// number of students and the number of test scores per student. #include <iostream>

#include <iomanip> using namespace std;



Int main(){

int numStudents, // Number of students numTests; // Number of tests per student double total, // Accumulator for total scores double total, // Accumulator for total scores

// This program averages test scores. It asks the user for the

// number of students and the number of test scores per student. #include <iostream>

#include <iomanip> using namespace std;



Int main(){

int numStudents, // Number of students numTests; // Number of tests per student double total, // Accumulator for total scores double total, // Accumulator for total scores



average; // Average test score// Set up numeric output formatting.cout << fixed << showpoint << setprecision(1);// Get the number of students.cout << "This program averages test scores.\n";cout << "For how many students do you have scores? "; cin >> numStudents;// Get the number of test scores per student.cout << "How many test scores does each student have? "; cin >> numTests;// Determine each student's average score.for (int student = 1; student <= numStudents; student++){total = 0; // Initialize the accumulator.for (int test = 1; test <= numTests; test++){double score;cout << "Enter score " << test << " for ";}34 cout << "student " << student << ": "; cin>>score;total += score;}average = total / numTests;cout << "The average score for student " << student; cout << " is " << average << ".\n\n";}return 0;}average; // Average test score// Set up numeric output formatting.cout << fixed << showpoint << setprecision(1);// Get the number of students.cout << "This program averages test scores.\n";cout << "For how many students do you have scores? "; cin >> numStudents;// Get the number of test scores per student.cout << "How many test scores does each student have? "; cin >> numTests;// Determine each student's average score.for (int student = 1; student <= numStudents; student++){total = 0; // Initialize the accumulator.for (int test = 1; test <= numTests; test++){double score;cout << "Enter score " << test << " for ";}34 cout << "student " << student << ": "; cin>>score;total += score;}average = total / numTests;cout << "The average score for student " << student; cout << " is " << average << ".\n\n";}return 0;}

average; // Average test score

// Set up numeric output formatting.

cout << fixed << showpoint << setprecision(1);

// Get the number of students.

cout << "This program averages test scores.\n";

cout << "For how many students do you have scores? "; cin >> numStudents;

// Get the number of test scores per student.

cout << "How many test scores does each student have? "; cin >> numTests;

// Determine each student's average score.

for (int student = 1; student <= numStudents; student++)

{

total = 0; // Initialize the accumulator.

for (int test = 1; test <= numTests; test++)

{

double score;

cout << "Enter score " << test << " for ";

}

34 cout << "student " << student << ": "; cin>>score;

total += score;

}

average = total / numTests;

cout << "The average score for student " << student; cout << " is " << average << ".\n\n";

}

return 0;

}

average; // Average test score

// Set up numeric output formatting.

cout << fixed << showpoint << setprecision(1);

// Get the number of students.

cout << "This program averages test scores.\n";

cout << "For how many students do you have scores? "; cin >> numStudents;

// Get the number of test scores per student.

cout << "How many test scores does each student have? "; cin >> numTests;

// Determine each student's average score.

for (int student = 1; student <= numStudents; student++)

{

total = 0; // Initialize the accumulator.

for (int test = 1; test <= numTests; test++)

{

double score;

cout << "Enter score " << test << " for ";

}

34 cout << "student " << student << ": "; cin>>score;

total += score;

}

average = total / numTests;

cout << "The average score for student " << student; cout << " is " << average << ".\n\n";

}

return 0;

}



Program Output:

This program averages test scores.For how many students do you have scores? 2 [Enter] How many test scores does each student have? 3 [Enter] Enter score 1 for student 1: 84 [Enter]Enter score 2 for student 1: 79 [Enter]Enter score 3 for student 1: 97 [Enter] The average score for student 1 is 86.7. Enter score 1 for student 2: 92 [Enter]Enter score 2 for student 2: 88 [Enter]Enter score 3 for student 2: 94 [Enter] The average score for student 2 is 91.3.This program averages test scores.For how many students do you have scores? 2 [Enter] How many test scores does each student have? 3 [Enter] Enter score 1 for student 1: 84 [Enter]Enter score 2 for student 1: 79 [Enter]Enter score 3 for student 1: 97 [Enter] The average score for student 1 is 86.7. Enter score 1 for student 2: 92 [Enter]Enter score 2 for student 2: 88 [Enter]Enter score 3 for student 2: 94 [Enter] The average score for student 2 is 91.3.

This program averages test scores.

For how many students do you have scores? 2 [Enter] How many test scores does each student have? 3 [Enter] Enter score 1 for student 1: 84 [Enter]

Enter score 2 for student 1: 79 [Enter]

Enter score 3 for student 1: 97 [Enter] The average score for student 1 is 86.7. Enter score 1 for student 2: 92 [Enter]

Enter score 2 for student 2: 88 [Enter]

Enter score 3 for student 2: 94 [Enter] The average score for student 2 is 91.3.

This program averages test scores.

For how many students do you have scores? 2 [Enter] How many test scores does each student have? 3 [Enter] Enter score 1 for student 1: 84 [Enter]

Enter score 2 for student 1: 79 [Enter]

Enter score 3 for student 1: 97 [Enter] The average score for student 1 is 86.7. Enter score 1 for student 2: 92 [Enter]

Enter score 2 for student 2: 88 [Enter]

Enter score 3 for student 2: 94 [Enter] The average score for student 2 is 91.3.



Breaking Out of a Loop

The break statement causes a loop to terminate early. Sometimes it’s necessary to stop a loop before it goes through all its iterations. The break statement, which was used with switch in Chapter 4, can also be placed inside a loop. When it is encountered, the loop stops and the program jumps to the statement immediately following the loop. The while loop in the following program segment appears to execute 10 times, but the break statement causes it to stop after the fifth iteration.



















































































Lab Task

Lab Task 1: Sum of Numbers (Using for)

Write a C++ program that calculates the sum of all numbers from 1 to 100 using a "for" loop. Display the final sum.



CODE:

#include <iostream>



using namespace std;



int main()



{

    int sum = 0;

   for (int number= 1 ; number<=100; number++ )

{

 cout<<number<< " ";

 sum = sum * number ;

}

cout<<sum<<" ";

return 0;

}

OUTPUT:



Lab Task 2: Multiplication Table (Using for)

Create a C++ program that asks the user to enter an integer between 1 and 10. Use a "for" loop to display the multiplication table for that number from 1 to 10. For example, if the user enters 5, the program should display:

5 x 1 = 5

5 x 2 = 10

5 x 3 = 15…

5 x 10 = 50



CODE:

#include <iostream>



using namespace std;



int main()



{

    int table;

    int i = 0;

    cout << "enter table no =";

    cin>> table;

   for (int i= 1 ; i<=10; i++ )

{

 cout<<table<<"*"<<i<<"="<<table*i<<endl;

}

return 0;

}

OUTPUT:



Lab Task 3: Fibonacci Sequence (Using for)

Develop a C++ program that generates and displays the first 20 numbers in the Fibonacci sequence using a "for" loop. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding ones.



CODE:

#include <iostream>



using namespace std;



int main()



{

    int num1= 0;

    int num2= 1;

    int add;

    int k;

    for (k=1;k<=19;k++)

    {

        cout<<" ";

        add=num1+num2;

        cout<<add;

        num1=num2;

        num2=add;

    }



return 0;

}

OUTPUT:



Lab Task 4: Factorial Calculator (Using for)

Write a C++ program that asks the user to enter a positive integer. Use a "for" loop to calculate and display the factorial of that number. Ensure that the user's input is a positive integer.



CODE:

#include <iostream>



using namespace std;



int main()

{

  int number;

  long factorial =1;

  cout << "Enter a positive no:" << endl;

  cin>>number;

  if(number>=0)

  {

      for (int i=1;i<=number;i++)

      {

          factorial*=i;

      }

  cout<<"factorial of "<<number<<" is :"<<factorial<<endl;

  }

  else

    {

    cout<<"invalid number"<<endl;

  }

    return 0;

}

OUTPUT:





Lab Task 5: Print series of Numbers (Using for)

Create a C++ program that generates series of 100 numbers and also differentiate even and odd number.  



CODE:

#include <iostream>



using namespace std;



int main()

{

  cout<<"series of numbers of 100 and even and odd difference"<<endl;

  for(int i=1;i<=100;i++)

  {

      if(i%2==0)

      {

          cout<<"even number:"<<i<<endl;

      }

  else

    {

  cout<<"odd numbers:"<<i<<endl;

    }

  }

    return 0;

}

OUTPUT:











center4500452120LAB 05Control Structures (for loop)1000002700LAB 05Control Structures (for loop)

LAB 05Control Structures (for loop)

LAB 05Control Structures (for loop)