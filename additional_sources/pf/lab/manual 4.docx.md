# Text-only document extract

Source document: manual 4.docx

Images and layout omitted. Claims below are source text, not independently verified results.



66738514414500



66738560579000PROGRAMMING FUNDAMENTALS



LAB 04



Lab Instructor: Jawad Hassan

 Department of Artificial Intelligence 

Email: jawad.hasan@umt.edu.pk



3505200149206

















































SESSION: 2023

SEMESTER: 1ST



Objective(s): Upon completion of this lab session, learners will be able to:

1162050163195Apply Loops in C++Use of While Loop in C++Use of Do-While Loop in C++Use of Pretest and Post-test loopUse of Event and Counter Controlled Loop00Apply Loops in C++Use of While Loop in C++Use of Do-While Loop in C++Use of Pretest and Post-test loopUse of Event and Counter Controlled Loop

Apply Loops in C++

Use of While Loop in C++

Use of Do-While Loop in C++

Use of Pretest and Post-test loop

Use of Event and Counter Controlled Loop

Apply Loops in C++

Use of While Loop in C++

Use of Do-While Loop in C++

Use of Pretest and Post-test loop

Use of Event and Counter Controlled Loop



The increment and decrement operators

++ and -- are operators that add and subtract 1 from their operands. To increment a value means to increase it by one, and to decrement a value means to decrease it by one. Both of the following statements increment the variable num:

num = num + 1; num += 1;

And num is decremented in both of the following statements:

num = num - 1; num = 1;

C++ provides a set of simple unary operators designed just for incrementing and decrementing variables. The increment operator is ++ and the decrement operator is --. The following statement uses the ++ operator to increment num: num++; And the following statement decrements num: num--;

Example:

// This program demonstrates the ++ and -- operators. #include <iostream>using namespace std; int main(){int num=4;// Display the value in num.cout << "The variable num is " << num << endl; cout << "I will now increment num.\n\n";// Use postfix ++ to increment num. num++;cout << "Now the variable num is " << num << endl; cout << "I will increment num again.\n\n";// Use prefix ++ to increment num.++num;cout << "Now the variable num is " << num << endl; cout << "I will now decrement num.\n\n";// Use postfix -- to decrement num. num--;cout << "Now the variable num is " << num << endl; cout << "I will decrement num again.\n\n";}// This program demonstrates the ++ and -- operators. #include <iostream>using namespace std; int main(){int num=4;// Display the value in num.cout << "The variable num is " << num << endl; cout << "I will now increment num.\n\n";// Use postfix ++ to increment num. num++;cout << "Now the variable num is " << num << endl; cout << "I will increment num again.\n\n";// Use prefix ++ to increment num.++num;cout << "Now the variable num is " << num << endl; cout << "I will now decrement num.\n\n";// Use postfix -- to decrement num. num--;cout << "Now the variable num is " << num << endl; cout << "I will decrement num again.\n\n";}

// This program demonstrates the ++ and -- operators. #include <iostream>

using namespace std; int main()

{

int num=4;

// Display the value in num.

cout << "The variable num is " << num << endl; cout << "I will now increment num.\n\n";

// Use postfix ++ to increment num. num++;

cout << "Now the variable num is " << num << endl; cout << "I will increment num again.\n\n";

// Use prefix ++ to increment num.

++num;

cout << "Now the variable num is " << num << endl; cout << "I will now decrement num.\n\n";



// Use postfix -- to decrement num. num--;

cout << "Now the variable num is " << num << endl; cout << "I will decrement num again.\n\n";

}



// This program demonstrates the ++ and -- operators. #include <iostream>

using namespace std; int main()

{

int num=4;

// Display the value in num.

cout << "The variable num is " << num << endl; cout << "I will now increment num.\n\n";

// Use postfix ++ to increment num. num++;

cout << "Now the variable num is " << num << endl; cout << "I will increment num again.\n\n";

// Use prefix ++ to increment num.

++num;

cout << "Now the variable num is " << num << endl; cout << "I will now decrement num.\n\n";



// Use postfix -- to decrement num. num--;

cout << "Now the variable num is " << num << endl; cout << "I will decrement num again.\n\n";

}





Program Output:

The variable num is 4I will now increment num. Now the variable num is 5 I will increment num again. Now the variable num is 6 I will now decrement num. Now the variable num is 5I will decrement num again. Now the variable num is 4The variable num is 4I will now increment num. Now the variable num is 5 I will increment num again. Now the variable num is 6 I will now decrement num. Now the variable num is 5I will decrement num again. Now the variable num is 4

The variable num is 4

I will now increment num. 

Now the variable num is 5 

I will increment num again. 

Now the variable num is 6 

I will now decrement num. 

Now the variable num is 5

I will decrement num again. 

Now the variable num is 4

The variable num is 4

I will now increment num. 

Now the variable num is 5 

I will increment num again. 

Now the variable num is 6 

I will now decrement num. 

Now the variable num is 5

I will decrement num again. 

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



The while Loop:

The while loop has two important parts: (1) an expression that is tested for a true or false value, and (2) a statement or block that is repeated as long as the expression is true.





Here is the general format of the while loop:



188722055245while (expression){statement; statement;// Place as many statements here// as necessary.}00while (expression){statement; statement;// Place as many statements here// as necessary.}Syntax:

while (expression)

{

statement; statement;

// Place as many statements here

// as necessary.

}

while (expression)

{

statement; statement;

// Place as many statements here

// as necessary.

}





















1123950121285// This program demonstrates a simple while loop. #include <iostream>using namespace std;int main(){int number = 1;while (number <= 5) { cout << "Hello\n"; number++;}cout << "That's all!\n"; return 0;}00// This program demonstrates a simple while loop. #include <iostream>using namespace std;int main(){int number = 1;while (number <= 5) { cout << "Hello\n"; number++;}cout << "That's all!\n"; return 0;}

// This program demonstrates a simple while loop. #include <iostream>

using namespace std;



int main()

{

int number = 1;

while (number <= 5) { cout << "Hello\n"; number++;

}

cout << "That's all!\n"; return 0;

}

// This program demonstrates a simple while loop. #include <iostream>

using namespace std;



int main()

{

int number = 1;

while (number <= 5) { cout << "Hello\n"; number++;

}

cout << "That's all!\n"; return 0;

}

Program Output:

Hello Hello Hello Hello Hello That's all!Hello Hello Hello Hello Hello That's all!

Hello Hello Hello Hello Hello That's all!

Hello Hello Hello Hello Hello That's all!









Flow diagram:



In this example, the number variable is referred to as the loop control variable because it controls the number of times that the loop iterates.



Counters:

1123950958215// This program displays the numbers 1 through 10 and// their squares. #include <iostream> using namespace std;int main(){int num =1; // initializing the counter cout << "Number Number Squared\n"; cout << "\n"; while (num <= 10){cout << num << "\t\t" << (num * num) << endl; num++; //Increment the counter.num++; //Increment the counter.}return 0;}00// This program displays the numbers 1 through 10 and// their squares. #include <iostream> using namespace std;int main(){int num =1; // initializing the counter cout << "Number Number Squared\n"; cout << "\n"; while (num <= 10){cout << num << "\t\t" << (num * num) << endl; num++; //Increment the counter.num++; //Increment the counter.}return 0;}A counter is   a   variable   that   is   regularly   incremented   or   decremented   each time a loop iterates. Sometimes it’s important for a program to control or keep track of the number of iterations a loop performs. For example, Program in example displays a table consisting of the numbers 1 through 10 and their squares, so its loop must iterate 10 times.

// This program displays the numbers 1 through 10 and

// their squares. #include <iostream> using namespace std;



int main()

{

int num =1; // initializing the counter cout << "Number Number Squared\n"; cout << "\n"; while (num <= 10){

cout << num << "\t\t" << (num * num) << endl; num++; //Increment the counter.

num++; //Increment the counter.

}

return 0;

}

// This program displays the numbers 1 through 10 and

// their squares. #include <iostream> using namespace std;



int main()

{

int num =1; // initializing the counter cout << "Number Number Squared\n"; cout << "\n"; while (num <= 10){

cout << num << "\t\t" << (num * num) << endl; num++; //Increment the counter.

num++; //Increment the counter.

}

return 0;

}





1125220226060Program OutputNumber Number Squared-------------------------00Program OutputNumber Number Squared-------------------------Program Output:

Program Output

Number Number Squared

-------------------------

Program Output

Number Number Squared

-------------------------









1

1

2

4

3

9

4

16

5

25

6

36

7

49

8

64

9

81

10

10





The do-while Loop

The do-while loop is a posttest loop, which means its expression is tested after each iteration.

Syntax:

196532530480dostatement;while (expression);00dostatement;while (expression);

do

statement;

while (expression);

do

statement;

while (expression);





Here is the format of the do-while loop when the body of the loop contains multiple 

 statements:

                                                        do{statement; statement;// Place as many statements here// as necessary.} while (expression);do{statement; statement;// Place as many statements here// as necessary.} while (expression);

do

{

statement; statement;

// Place as many statements here

// as necessary.

} while (expression);

do

{

statement; statement;

// Place as many statements here

// as necessary.

} while (expression);

3321903174918Flow diagram:



// This program averages 3 test scores. It repeats as// many times as the user wishes. #include <iostream>using namespace std;int main(){int score1, score2, score3; // Three scores double average; // Average scorechar again; // To hold Y or N input do{// get three scoresCout<<”enter 3 scores and I will avg them”; Cin>>score1>>socre 2>>score3;/calculate and display the avg.average = (score1 + score2 + score3) / 3.0; cout << "The average is " << average << ".\n";// Does the user want to average another set? cin >> again;} while (again == 'Y' || again == 'y'); return 0;}// This program averages 3 test scores. It repeats as// many times as the user wishes. #include <iostream>using namespace std;int main(){int score1, score2, score3; // Three scores double average; // Average scorechar again; // To hold Y or N input do{// get three scoresCout<<”enter 3 scores and I will avg them”; Cin>>score1>>socre 2>>score3;/calculate and display the avg.average = (score1 + score2 + score3) / 3.0; cout << "The average is " << average << ".\n";// Does the user want to average another set? cin >> again;} while (again == 'Y' || again == 'y'); return 0;}

// This program averages 3 test scores. It repeats as

// many times as the user wishes. 

#include <iostream>

using namespace std;



int main()

{

int score1, score2, score3; // Three scores double average; // Average score

char again; // To hold Y or N input do{

// get three scores

Cout<<”enter 3 scores and I will avg them”; Cin>>score1>>socre 2>>score3;

/calculate and display the avg.

average = (score1 + score2 + score3) / 3.0; cout << "The average is " << average << ".\n";

// Does the user want to average another set? cin >> again;

} while (again == 'Y' || again == 'y'); return 0;

}

// This program averages 3 test scores. It repeats as

// many times as the user wishes. 

#include <iostream>

using namespace std;



int main()

{

int score1, score2, score3; // Three scores double average; // Average score

char again; // To hold Y or N input do{

// get three scores

Cout<<”enter 3 scores and I will avg them”; Cin>>score1>>socre 2>>score3;

/calculate and display the avg.

average = (score1 + score2 + score3) / 3.0; cout << "The average is " << average << ".\n";

// Does the user want to average another set? cin >> again;

} while (again == 'Y' || again == 'y'); return 0;

}

Program Output:

Enter 3 scores and I will average them: 80 90 70 [Enter] The average is 80.Do you want to average another set? (Y/N) y [Enter] Enter 3 scores and I will average them: 60 75 88 [Enter] The average is 74.3333.Do you want to average another set? (Y/N) n [Enter]Enter 3 scores and I will average them: 80 90 70 [Enter] The average is 80.Do you want to average another set? (Y/N) y [Enter] Enter 3 scores and I will average them: 60 75 88 [Enter] The average is 74.3333.Do you want to average another set? (Y/N) n [Enter]

Enter 3 scores and I will average them: 80 90 70 [Enter] The average is 80.

Do you want to average another set? (Y/N) y [Enter] Enter 3 scores and I will average them: 60 75 88 [Enter] The average is 74.3333.

Do you want to average another set? (Y/N) n [Enter]

Enter 3 scores and I will average them: 80 90 70 [Enter] The average is 80.

Do you want to average another set? (Y/N) y [Enter] Enter 3 scores and I will average them: 60 75 88 [Enter] The average is 74.3333.

Do you want to average another set? (Y/N) n [Enter]





































Lab Task 1: Counting Numbers (Using While)

Write a C++ program that uses a "while" loop to display all the even numbers between 1 and 20. Start at 2 and increment by 2 with each iteration.



Code:

#include <iostream>



using namespace std;



int main()

{

    int check = 1;

    cout<< " even numbers are : "<<endl;

    while (check <=20)

    {

        if (check%2==0)

        cout<<check<< " "<<endl;

        check++;

    }

    return 0;

}

OUTPUT:





Lab Task 2: Print Shape (Using While)

Print below shape using while loop

a)

* * * * *

* * * * *

* * * * *

* * * * *

* * * * *

b)

* 

* * 

* * * *

* * * * *

* * * * * *

CODE:

A:

include <iostream>



using namespace std;



int main()

{

    int i = 1;

    while (i<=5){

    int j = 1 ;

    while (j<=5){

    cout<< "*";

    j++;

    }

    cout<<endl;

    i++;

    }

    return 0;

}

B:

#include <iostream>



using namespace std;



int main()

{

    int i = 1;

    while (i<=5){

    int j = 1 ;

    while (j<=i){

    cout<< "*";

    j++;

    }

    cout<<endl;

    i++;

    }

    return 0;

}

OUTPUT:

A:



B:





Lab Task 3: Password Guessing Game (Using Do-While)

Develop a C++ program that simulates a password guessing game. Generate a random password (e.g., "password123") and ask the user to guess it. Use a "do-while" loop to repeatedly prompt the user for their guess until they correctly guess the password. Provide feedback on each attempt.



CODE:

using namespace std;



int main()

{

const string correctPassword = "REDACTED_FOR_PUBLICATION";

    string userGuess;

    int attempts = 0;

    do {

        cout << "Enter password guess: ";

        cin >> userGuess;

        attempts++;

        if (userGuess == correctPassword) {

            cout << "Congratulations you guessed the pass " <<endl;

        } else {

            cout << "Incorrect password. try again." <<endl;

        }

    } while (userGuess != correctPassword);



    return 0;

}

OUTPUT:





















Lab Task 4: Number Reversal (Using While)

Write a C++ program that asks the user to enter a positive integer. Use a "while" loop to reverse the digits of the number and display the reversed number. For example, if the user enters 12345, the program should display 54321.



CODE:

#include <iostream>

using namespace std;

int main()

{

    int number;

    cout << "Enter an integer ";

    cin >> number;

    while (number <= 0) {

        cout << " Enter the integer: ";

        cin >> number;

    }

    int reversedNumber = 0;

    while (number > 0) {

        int digit = number % 10;

        reversedNumber = reversedNumber * 10 + digit;

        number /= 10;

    }

    cout << "Reversed number: " << reversedNumber <<endl;

    return 0;

}

PROGRAM:



Lab Task 5: Multiplication Table (Using Do-While)

Create a C++ program that asks the user to enter an integer between 1 and 10. Use a "do-while" loop to display the multiplication table for that number from 1 to 10. For example, if the user enters 5, the program should display:

5 x 1 = 5

5 x 2 = 10

5 x 3 = 15

...

5 x 10 = 50



PROGRAM:

#include <iostream>

using namespace std;

int main()

{

    int number;

    do {

        cout << "Enter the integer between 1 and 10: ";

        cin >> number;

        if (number < 1 || number > 10) {

        cout << "enter correct integer between 1 and 10." <<endl;

        }

    } while (number < 1 || number > 10);

    cout <<  "table for "<< number << ":" <<endl;

    int i = 1;

    do {

    cout << number << " * " << i << " = " << (number * i) <<endl;

        i++;

    } while (i <= 10);

    return 0;

}

OUTPUT:











center4500452120      LAB 04Control Structures (while/do-while)1000002700      LAB 04Control Structures (while/do-while)

      LAB 04Control Structures (while/do-while)

      LAB 04Control Structures (while/do-while)