//While Loop
#include <iostream>
using namespace std;

int main() {

    int num {};
    cout << "Enter a positive integer to start the countdown: ";
    cin >> num;

    while (num > 0) {
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl;

    //============================================================

    int num1 {};
    cout << "Enter a positive integer to count up to: ";
    cin >> num1;

    int i {1};
    while (num1 >= i) {
        cout << i << endl;
        i++;
    }

    //============================================================

    int number {};

    cout << "Enter an integer less than 100: ";
    cin >> number;

    while (number >= 100) {  // !(number < 100)
        cout << "Enter an integer less than 100: ";
        cin >> number;
    }
    cout << "Thanks" << endl;

    //=============================================================

    bool done {false}; //do set the loop into false or else we wont get
    int number {};     //into the while loop to make the done work 

    while (!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
        if (number <= 1 || number >= 5)
            cout << "Out of range, try again" << endl; //if this executes it goes back to while 
                                                       //and checks if done is true but its still false
                                                       //and so it continues untill done is true in while 
        else {
            cout << "Thanks!" << endl;
            done = true;   //we set the flag to true and this is important in boolean operations
                           //and so it goes back to while and checks the done and now its true 
                           //and so it terminates out of the while loop 
        }
    }

    //================================================================

    /*Given a vector of integers, determine how many integers are present before you see the value -99 . 
    Note, it's possible -99  is not in the vector! If -99  is not in the 
    vector then the result will be equal to the number of elements in the vector.
    The final result should be stored in an integer variable named count .
    Note that you the different vectors will be tested against your code. You do not need to declare the 
    vector of integers. vec  is the name of the vector you should use.
    
    
    #include <iostream>
    #include <vector>
    using namespace std;

    int count_numbers(const vector<int> &vec) {
    int count {0};
    size_t index {0};    See the Q/A forum for more about size_t
                         size_t is an unsigned int
                         you can replace size_t with int or unsigned int and it will work fine
            size_t ->  (which is an unsigned integer type used for array indexing and loop counting)
    while (index < vec.size() && vec.at(index) != -99  ) {
        ++count;
        ++index;
    }
    
    return count;
}*/

    return 0;
}