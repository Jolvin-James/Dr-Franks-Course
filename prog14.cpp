//Nested Loop 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Multiplication Table
    for (int num1 {1} ; num1 <= 10 ; num1++) {
        for (int num2 {1} ; num2 <= 10 ; num2++){
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "-------------------" << endl;
    } 

//========================================================================

    //Histogram
    int num_items {};

    cout << "How many data items do you have? ";
    cin >> num_items;

    vector<int> data {};

    for (int i {1} ; i <= num_items ; i++){
        int data_item {};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout << "\nDisplaying Histogram" << endl;
    for (auto val: data) {
        for (int i {1} ; i <= val ; i++) {
            if (i % 5 == 0)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }
    



    return 0;
}

//======================================================================================================

/* Nested Loops - Sum of the Product of all Pairs of Vector Elements
Given a vector of integers named vec  that is provided for you, find the sum of the 
product of all pairs of vector elements.
You should declare an integer variable named result  and store the final product in this variable.

For example, given the vector  vec  to be {1, 2 , 3} , the possible pairs are (1,2), (1,3), and (2,3) . 
So the result would be (1*2) + (1*3) + (2*3)  which is 11 .

Another example:
Given the vector vec  to be {2, 4, 6, 8} , the possible pairs are (2,4), (2,6), (2,8), (4,6), (4,8), and (6,8) .
So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140 .

If the vector is empty or has only 1  element then the result  should be 0 . */


/*Solution explanation:
An integer variable named result is declared and initialized to 0. This variable will store the cumulative sum of products.

The code then uses nested for loops to iterate over all possible pairs of integers in the vector. The outer loop uses the index variable i 
to iterate from 0 to vec.size() - 1, and the inner loop uses the index variable j to iterate from i + 1 to vec.size() - 1.

For each pair of indices (i, j) where i is less than j, the code multiplies the values at those indices (vec.at(i) and vec.at(j)) and adds 
the result to the result variable.

After all pairs have been processed, the final value of result represents the sum of products of all possible pairs of integers in the vector.*/

int calculate_pairs(vector<int> vec) {
    
    int result{};
    
    for (size_t i=0; i< vec.size(); ++i)
       for (size_t j=i+1; j< vec.size(); ++j) 
            result = result + vec.at(i) * vec.at(j);
    
    return result;
}
