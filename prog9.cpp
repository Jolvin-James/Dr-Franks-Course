//Conditional Operator
#include <iostream>

using namespace std;

int main() {
    int num {};

    cout << "Enter an integer: ";
    cin >> num;

    //if else format
    if (num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;

    //conditional operator format
    cout << num << " is " << ( (num % 2 == 0) ? "even" : "odd") << endl; 

    return 0;
}

int main() {
    int num1{}, num2{};

    cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2){
        cout << "Largest number is: " << ( (num1 > num2) ? num1 : num2 ) << endl;
        cout << "Smallest number is: " << ( (num1 < num2) ? num1 : num2 ) << endl;
    }
    else {
        cout << "The numbers are the same" << endl;
    }

    return 0;
}