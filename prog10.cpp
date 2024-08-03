//For Loop
#include <iostream>
#include <vector>

using namespace std;

int main() {
    for (int i {1} ; i <= 10 ; i++)
        cout << i << endl;

    for (int i {1} ; i <= 10 ; i+=2)
        cout << i << endl;

    for (int i {10} ; i >0 ; i--)
        cout << i << endl;
    cout << "Blastoff!" << endl;

    for (int i {10} ; i <= 100 ; i+=10) {
        if (i % 15 == 0)
        cout << i << endl;
    }

    for (int i {1} , j {5} ; i <=5 ; i++ , j++)
        cout << i << " + " << j << " = " << (i + j) << endl;

    for (int i {1} ; i <= 100 ; i++) {
        cout << i;
        if (i % 10 == 0)
            cout << endl;
        else
            cout << " ";
    }

    for (int i {1} ; i <= 100 ; i++) {
        cout << i << ( (i % 10 == 0) ? "\n" : " ");
    }

    vector<int> nums {10, 20, 30, 40, 50};
    for (unsigned int i {0} ; i < nums.size() ; i++)
        cout << nums[i] << endl;

    /*Write code that uses a for loop to calculate 
    the sum of the odd integers from 1 to 15, inclusive.
    The final result should be stored in an integer 
    variable named sum. */

//     int calculate_sum() {
    
//     int sum {0};
    
//     for (int i=1;i<=15; ++i) {
//         if (i % 2 != 0) {
//             sum += i;
//         }
//     }
    
//     return sum;
// }



    return 0;
}