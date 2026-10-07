# Text-only document extract

Source document: LAB MANUAL 3.docx

Images and layout omitted. Claims below are source text, not independently verified results.

 

66738514414500



66738560579000PROGRAMMING FUNDAMENTALS



LAB 03



Lab Instructor: Jawad Hassan

 Department of Artificial Intelligence 

Email: jawad.hasan@umt.edu.pk



3505200149206

















































SESSION: 2023

SEMESTER: 1ST



Objective(s): Upon completion of this lab session, learners will be able to:

1424940201930Learn how to debug your codeApply if –else decision statements in C++Apply switch decision statements in C++00Learn how to debug your codeApply if –else decision statements in C++Apply switch decision statements in C++

Learn how to debug your code

Apply if –else decision statements in C++

Apply switch decision statements in C++

Learn how to debug your code

Apply if –else decision statements in C++

Apply switch decision statements in C++





Why you need to learn how to use debugger? What is debugger?

A tool allows you to monitor your code’s variable value at runtime and identify where the code is incorrect?



Quote: “If there’s a single feature of Visual Studio that every developer uses and is essential to the development process it is the built-in debugger”



Setup breakpoint

Breakpoints pause the execution of the code and allow developers to examine controls and variables before allowing the program to continue to execute.

1143000195979





How to set up a breakpoint in a program?

Move your mouse to the left margin of a line you want to pause

Then, left click your mouse, and you will see a red circle appears. It means a breakpoint is set at this line.





Important windows:

Watch Window: It allows monitoring of any object which can simply be highlighted in the code window and dragged to the Watch window. The Watch window monitor objects regardless of whether they are in scope or now.

Locals Window: It cannot have objects dragged into it and shows all objects that are currently in scope. A powerful feature of the Locals window is that it allows the objects to by modified.

Autos Window: It shows the objects used in the execution of the current statement.









1287365157238



Step Into(F11): executes the next line of code that the program would normally execute (if the current line is a function invocation, it will jump into the function execution) Step Over(F10): proceeds to the next line of code in the current procedure, this means that other routines (such as functions) are called it will not proceed into those routines but simply execute them and continue to the next line of the current code block.



Step Out (shift+F11): will move to the line of code which called the current process or the next breakpoint if that comes first.



Introduction:

A program is usually not limited to a linear sequence of instructions. Normally, statements in a program execute one after the other in the order in which they‘re written. This is called sequential execution. Various C++ statements we‘ll soon discuss enable you to specify that the next statement to execute may be other than the next one in sequence. This is called transfer of control. C++ provides control structures that serve to specify what has to be done by our program, when and under which circumstances. The instructions in the program can be organized in three kinds of control structures.

If Statement

If/else Statement

Else if

If Statement:

The if statement can cause other statements to execute only under certain conditions.

General format of the if statement:



#include <iostream>  

using namespace std;  

   

int main () 

{  

   int num = 10;    

if (num % 2 == 0)    

{    

cout<<"It is even number";    

}   

   return 0;  

}



Output: It is even number









The If / else statement:

The   if/else statement   will     executeone      group   of        statements if         the expression is         true, or        anothergroup   of       statements if     the     expression is false. The if/else statement is an expansion of the if statement. Here is its format:



#include <iostream>  

using namespace std;  

int main () {  

int num = 11;    

if (num % 2 == 0)    

{    

cout<<"It is even number";    

}   

else  

{    

cout<<"It is odd number";    

}  

return 0;  

}  



Output: It is odd number

































Else-if: Check Conditions for multiple statements































Example:

// This program uses an if/else if statement to assign a// letter grade (A, B, C, D, or F) to a numeric test score.

#include <iostream> using namespace std;

int main() 

{ int testScore;   char grade;  

cout << "Enter your numeric test score and I will\n";         

cout << "tell you the letter grade you earned: ";

cin >> testScore;

if (testScore < 60)

grade = 'F';     

else if (testScore < 70)

grade = 'D';

else if (testScore < 80)

grade = 'C'; 

else if (testScore < 90)

grade = 'B';

else if (testScore <= 100)

grade = 'A';

cout << "Your grade is " << grade << ".\n"; 

return 0;  }



1125220299085Enter your numeric test score and I will tell you the letter grade you earned: 88[Enter] Your grade is B.00Enter your numeric test score and I will tell you the letter grade you earned: 88[Enter] Your grade is B.Program Output

Enter your numeric test score and I will tell you the letter grade you earned: 88[Enter] Your grade is B.

Enter your numeric test score and I will tell you the letter grade you earned: 88[Enter] Your grade is B.











Switch Statement:

The switch statement lets the value of a variable or expression determine where the program will branch.



Syntax:

switch(expression){      

case value1:      

 //code to be executed;      

 break;    

case value2:      

 //code to be executed;      

 break;    

......      

      

default:       

 //code to be executed if all cases are not matched;      

 break;    

} 





#include <iostream> using namespace std; void main (){

// local variable declaration: char grade;

cout<<"Enter the grade of students "; cin>>grade; switch(grade){ case 'A' :

cout

<<"Excellent!\n"; 

break; case 'B' : case 'C' :

cout << "Well done\n"; 

break;

case 'D' :

cout << "You passed\n"; 

break;

case 'F' :

cout << "Better try again\n"; break; default :

cout << "Invalid grade\n";

}

}



OUTPUT



Case “A”

If the user entered letter grade ‗A‘. The compiler executes case ‗A‘ statements.



2626614157649



Case “B”

If the user entered letter grade ‗B‘. The compiler executes case ‗B‘ statements.



2576576157893



Case “C”

If the user entered letter grade ‗C‘. The compiler executes case ‗C‘ statements.



2581275157144



Case “D”

If the user entered letter grade ‘D’. The compiler executes case ‘D’ statements.



2679954157157





Case „F‟

If the user entered grade F. The compiler executes case F statements.



2636520158062







Default Case:



If any other letter grade is entered. The default statement is executed.



2771775157480



Without the break statement, the program “falls through” all of the statements below the one with the matching case expression. Sometimes this is what you want. Program 4-30 lists the features of three TV models a customer may choose from. The Model 100 has remote control. The Model 200 has remote control and stereo sound. The Model 300 has remote control, stereo sound, and picturein-a-picture capability. The program uses a switch statement with carefully omitted breaks to print the features of the selected model.





























































Lab Task

Lab Task 1: Calculator (Using If condition)

Develop a basic calculator program in C++. Ask the user to enter two numbers and an operator (+, -, *, /). Use a "if" statement to perform the selected operation on the two numbers and display the result. Handle division by zero gracefully.( 2 + 2 = 4)



PROGRAM:

#include <iostream>



using namespace std;



int main()

{

    double num1,num2,result;

    char op ;

    cout << "Enter first no :" << endl;

    cin>>num1;

    cout << "Enter the operator (+,-,*,/) :" << endl;

    cin>>op;

    cout << "Enter second no:" << endl;

    cin>>num2;

    if(op == '+')

        result = num1 +num2;

    else if (op =='-')

        result = num1 - num2;

    else if (op == '*')

        result = num1 *num2;

    else if (op == '/')

        result = num1 / num2 ;

    cout<<"Answer is:"<<num1<<op<<num2<<"-"<<result<<endl;



    return 0;

}

OUTPUT:







Lab Task 2: Day of the Week (Using Switch)

Create a C++ program that asks the user to enter a number between 1 and 7, representing the days of the week. Use a "switch" statement to display the corresponding day of the week based on the user's input. If the input is not in the valid range, display an error message.



PROGRAM:

#include <iostream>



using namespace std;

int main()

{

    int dayNumber;

    cout << "Enter a number between 1 to 7: ";

    cin >> dayNumber;

    switch (dayNumber) {

        case 1:

            cout << "Monday"<<endl;

            break;

        case 2:

            cout << "Tuesday"<<endl;

            break;

        case 3:

            cout << "Wednesday"<<endl;

            break;

        case 4:

            cout << "Thursday"<<endl;

            break;

        case 5:

            cout << "Friday"<<endl;

            break;

        case 6:

            cout << "Saturday"<<endl;

            break;

        case 7:

            cout << "Sunday"<<endl;

            break;

        default:

            cout << "Invalid output." << std::endl;

            break;

    }

    return 0;

}

OUTPUT:







    Lab Task 3: Ticket Pricing (Using If-Else)

Write a C++ program for a movie theater that asks the user to enter their age. Use "if-else" statements to determine the ticket price based on the following rules:

Children (age 0-12): $5

Adults (age 13-64): $10

Seniors (age 65 and above): $7



PROGRAM:

#include <iostream>



using namespace std;

int main()

{

    int age;

    cout << "Enter your age: ";

    cin >> age;

    if (age >= 0 && age <= 12) {

        cout << "Ticket Price:5$" <<endl;

    }

    else if (age >= 13 && age <= 63) {

        cout << "Ticket Price:10$" <<endl;

    }

    else

        {

        cout << "INVALID" <<endl;

    }

    return 0;

}

OUTPUT:



    Lab Task 4: Pass/Fail (Using If)

Create a C++ program that prompts the user to enter the scores of three exams (each out of 100 points). Calculate the average score and use an "if" statement to determine if the student passes (average score >= 60) or fails (average score < 60). Display the result along with the average score.



PROGRAM:

#include <iostream>



using namespace std;

int main()

{

    int exam1, exam2, exam3;

    cout << "Enter marks for Exam 1 to 100:";

    cin >> exam1;

    cout << "Enter marks for Exam 2 to 100: ";

    cin >> exam2;

    cout << "Enter marks for Exam 3 to 100:";

    cin >> exam3;

    int averageMarks = (exam1 + exam2 + exam3) / 3.0;

    cout << "Average Marks: " << averageMarks <<endl;

    if (averageMarks >= 60.0) 

    {

    cout << "You have passed."<<endl;

    }

    else {

    cout << "You have failed."<<endl;

    }

    return 0;

}

OUTPUT:



Lab Task 5: BMI Calculator (Using If-Else)

Write a C++ program that calculates a person's Body Mass Index (BMI). Ask the user to enter their weight (in kilograms) and height (in meters). Calculate the BMI using the formula BMI = weight / (height * height). Use "if-else" statements to classify the BMI into categories:

- Underweight: BMI < 18.5

- Normal weight: BMI >= 18.5 and < 25

- Overweight: BMI >= 25 and < 30

- Obesity: BMI >= 30

Display the BMI category along with the calculated BMI value.





PROGRAM:

#include <iostream>



using namespace std;

int main()

{

    int weight, height;

    cout << "Enter your weight in kg: ";

    cin >> weight;

    cout << "Enter your height in meters: ";

    cin >> height;

    float bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi <<endl;   //bmi stands for body to mass index

    if (bmi < 18.5)

    {

    cout << "Under Weight" <<endl;

    }

     else if (bmi >= 18.5 && bmi < 25)

    {

    cout << "Normal Weight" <<endl;

    }

     else if (bmi >= 25 && bmi < 30)

    {

    cout << "Over Weight" <<endl;

    }

     else

    {

    cout << "Obesity" <<endl;

    }

    return 0;

}

OUTPUT:













center4500452120LAB 03:Control Structures (if/if-else/switch)1000002700LAB 03:Control Structures (if/if-else/switch)

LAB 03:Control Structures (if/if-else/switch)

LAB 03:Control Structures (if/if-else/switch)







