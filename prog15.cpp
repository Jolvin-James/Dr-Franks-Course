//Loops Section Challenge
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list {};
    char choice {};

    do {
        //Displaying menu
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

    
        if (choice == 'P' || choice == 'p') {
            if (list.size() == 0)
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto l: list)
                    cout << l << " ";
                cout << "]" << endl;
            }
        }
        else if (choice == 'A' || choice == 'a') {
            int num_to_add {};
            cout << "Enter a number to be added to the list: ";
            cin >> num_to_add;
            list.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        }
        else if (choice == 'M' || choice == 'm') {
            if (list.size() != 0){
                int total {};
                for (auto l: list)
                    total = total + l;  //total will be zero and 'l' will be the data collective in 'list'
                cout << "The mean is: " << static_cast<double>(total)/list.size() << endl;
            }
            else
                cout << "Unable to calculate mean - no data" << endl;
        }
        else if (choice == 'S' || choice == 's') {
            if (list.size() == 0)
                cout << "Unable to determine the smallest - list is empty" << endl;
            else {
                int smallest = list.at(0);  //here we know that there is a data in list and so we initialize 
                                            //to the first data in list claiming that this is the smallest number
                                            //then we use range-based for loop to access the elements in list and check 
                                            //which is the smallest compared to the first element in the list and then store it in
                                            //a variable and then print it out
                for (auto l: list)
                    if (l < smallest)
                        smallest = l;
                cout << "The smallest number is: " << smallest << endl;
            }
        }
        else if (choice == 'L' || choice == 'l') {
            if (list.size() == 0)
                cout << "Unable to determine the largest - list is empty" << endl;
            else {
                int largest = list.at(0);
                for (auto l: list)
                    if (l > largest)
                        largest = l;
                cout << "The largest number is: " << largest << endl;
            }
        }
        else if (choice == 'Q' || choice == 'q') {
            cout << "Goodbye" << endl;
        }
        else {
            cout << "Unknown selection, please try again" << endl;
            }
        } while (choice != 'Q' && choice != 'q');

    return 0;
}

/*What does the following code snippet display if the user enters 70  at the keyboard?

    int temperature;
    cout << "Enter a temperature: ";
    cin >> temperature;
    if (temperature < 50);      The semi-colon at the end of the first if-statement 
                                means do nothing if the condition is true.
                                and so the output will be:
                                It's cold!
                                It's hot!
                                
        cout << "It's cold!" << endl;
    if (temperature > 50)
        cout << "It's hot!" << endl;
    else
        cout << "Maybe it's raining?"; 
*/