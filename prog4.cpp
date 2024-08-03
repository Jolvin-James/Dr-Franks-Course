#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vector1;
    vector <int> vector2;

    //For vector1 container
    vector1.push_back(10);
    vector1.push_back(20);

    cout << "element one: " << vector1.at(0) << endl;
    cout << "element two: " << vector1.at(1) << endl;

    cout << "vector1 contains " << vector1.size() << "elements." << endl;

    //For vector2 container
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "element one: " << vector2.at(0) << endl;
    cout << "element two: " << vector2.at(1) << endl;

    cout << "vector2 contains " << vector2.size() << "elements." << endl;

    //For 2D vector container
    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Displaying elemnts: " << endl;
    cout << vector_2d.at(0).at(0);
    cout << "\t" << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0);
    cout << "\t" << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "Displaying elemnts after change: " << endl;
    cout << vector_2d.at(0).at(0);
    cout << "\t" << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0);
    cout << "\t" << vector_2d.at(1).at(1) << endl;

    cout << "Displaying elements in vector1: " << endl;
    cout << vector1.at(0) << "\t" << vector1.at(1) << endl;

    return 0;
}