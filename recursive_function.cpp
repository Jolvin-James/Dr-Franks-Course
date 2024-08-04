// Recursion - Fibonacci
#include <iostream>

using namespace std;
unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;	             // base cases
    return fibonacci(n-1) + fibonacci(n-2); // recursion
}

int main() {
    cout << fibonacci(5) << endl;   // 5
    cout << fibonacci(30) << endl;	// 832040 
    cout << fibonacci(40) << endl; // 102334155
    return 0;
}

// Recursion - Factorial
#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;	             // base case
    return n * factorial(n-1); // recursive case
}

int main() {
    cout << factorial(3) << endl;       // 6
//    cout << factorial(8) << endl;     // 40320
//    cout << factorial(12) << endl;   // 479001600
//    cout << factorial(20) << endl;   // 2432902008176640000
    return 0;
}


/*  Coding Exercise 1
Implementing a Recursive Function - Sum of Digits
Problem Title: Sum of Digits using Recursion

Problem Description:
Write a C++ program to find the sum of digits of a number using recursion.

You need to implement the function int sum_of_digits(int n) that takes an integer n as an argument and returns the sum of its digits.

Function Signature:
int sum_of_digits(int n)

Input:
An integer

Output:
Return the sum of the digits of n.

Example:
Input:
n = 1234
Output:
10

Explanation:
The sum of digits of 1234 is 1 + 2 + 3 + 4 = 10.

Here are a few more examples:

Test Case 1:
Input: n = 5678
Output: 26

Test Case 2:
Input: n = 9999
Output: 36

Test Case 3:
Input: n = 1000
Output: 1


#include <iostream>
#include <string>

int sum_of_digits(int n) {
    // Write your code below this line
    
    if (n == 0)
        return 0;
    return (n % 10 + sum_of_digits(n / 10));
    
    // Write your code above this line
}

The step-by-step process for a better understanding of how the algorithm works. 
Let the number be 12345. 
Step 1-> 12345 % 10 which is equal-too 5 + ( send 12345/10 to next step ) 
Step 2-> 1234 % 10 which is equal-too 4 + ( send 1234/10 to next step ) 
Step 3-> 123 % 10 which is equal-too 3 + ( send 123/10 to next step ) 
Step 4-> 12 % 10 which is equal-too 2 + ( send 12/10 to next step ) 
Step 5-> 1 % 10 which is equal-too 1 + ( send 1/10 to next step ) 
Step 6-> 0 algorithm stops 
*/

/*  Coding Exercise 2
Implementing a Recursive Function - Save a Penny
In this exercise you will create a program that calculates the total_amount of money that will be accumulated if you start with a 
penny and double it everyday for n number of days.

E.g.
Day 1: $0.01
Day 2: $0.02
Day 3: $0.04
. . .
. . .
. . .
Day 16: $327.68
Day 17: $655.36
Day 18: $1310.72

For this program, assume that all money will be represented as a double value and so a penny will be represented as 0.01.

Begin by completing the function prototype a_penny_doubled_everyday which is passed an int and a double.

Now that the function prototype is declared, at the bottom of the file define the function.

The function should return the total_amount accumulated after n number of days. For example, if n = 18, the function should 
return 1310.72. The function should be able to calculate the total_amount for any number of days starting with any amount however 
the default amount should be a penny.

Now, from the function body of amount_accumulated, declare and initialize the variable total_amount by calling the 
a_penny_doubled_everyday function for n = 25 days.

Note: if you get an error such as "Oops, there was a problem on our end". This may mean that you have infinite recursion 
in your solution. Make sure your logic checks for a base case and doesn't recurse forever.


#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count {0};

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPE BELOW THIS LINE----

double a_penny_doubled_everyday(int, double amount = 0.01);

//----WRITE THE FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void amount_accumulated() {
//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION CALL BELOW THIS LINE----

    double total_amount = a_penny_doubled_everyday(25);
    
//----WRITE THE FUNCTION CALL ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

double a_penny_doubled_everyday(int n, double amount) {
    function_activation_count++;
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    
    if (n <= 1)
        return amount;
    return a_penny_doubled_everyday(--n, amount*2);  
    
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //DO NOT MODIFY THE CODE BELOW THIS LINE----
}

int test_function_activation_count() {
    return function_activation_count;
}
*/