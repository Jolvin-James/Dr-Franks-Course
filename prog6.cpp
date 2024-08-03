#include <iostream>

using namespace std;

int main() {
    int num {};
    cout << "Enter your number: ";
    cin >> num;

    const int min {10};
    const int max {100};

    if (num >= 10) {
        cout << "\n=============== If Statement 1 ===============" << endl;
        cout << "The number " << num << " is greater than " << min << endl;
    
        int diff {num - min};
        cout << diff << " is the difference between " << min << " and the number " << num << " entered." << endl;
    }

    if (num <= 100) {
        cout << "\n=============== If Statement 2 ===============" << endl;
        cout << "The number " << num << " is lesser than " << max << endl;
    
        int diff {max - num};
        cout << diff << " is the difference between " << max << " and the number " << num << " entered." << endl;
    }

    if (num >= min && num <= max){
        cout << "\n=============== If Statement 3 ===============" << endl;
        cout << num << " is in range between " << min << " and " << max << endl;
        cout << "This means statement 1 and 2 should be true or be displayed." << endl;
    }

    if (num == min || num == 100){
        cout << "\n=============== If Statement 4 ===============" << endl;
        cout << num <<" is right on a boundary." << endl;
        cout << "This means all 4 statements have been displayed." << endl;
    }

    cout << endl;
    return 0;
}