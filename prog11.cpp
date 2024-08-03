//Range-based For Loop
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int scores [] {10, 20, 30};

    for (int score: scores)
        cout << score << endl;
    
    for (auto score: scores)
        cout << score << endl;

    //========================================================

    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    double average_temp {};
    double total {};

    for (auto temp: temperatures)
        total += temp;

    if (temperatures.size() != 0)
        average_temp = total / temperatures.size();

    cout << fixed << setprecision(1);
    cout << "Average temoerature is: " << average_temp << endl;

    //===========================================================

    for (auto val: {1, 2, 3, 4, 5})
        cout << val << endl;

    //===========================================================

    for (auto c: "This is a test")
        cout << c;

    for (auto c: "This is a test")
        if (c != ' ')
            cout << c;

    //===========================================================

    for (auto c: "This ia a test")
        if (c == ' ')
            cout << "\t";
        else
            cout << c;

    //============================================================


    

    /*Use a range-based for loop to loop through a given vector of integers 
    and determine how many elements in the vector are evenly divisible by 
    either 3 or by  5.
    The final result should be stored in an integer variable named count .
    The vector of integers has been provided for you and is named vec .*/

// #include <vector>
// using namespace std;

// int count_divisible() {
    
//     vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,
//     200,300,400,500,600,700};
    
//     int count{0};
    
//     for (auto i: vec) {
//         if (i % 3 == 0 || i % 5 == 0) {
//             ++count;
//         }
//     }
    
//     return count;
// }
    
    return 0;
}