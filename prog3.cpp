#include <iostream>
using namespace std;

int main() {

    const double sales_tax {0.06};
    const double price_small_room {25.0};
    const double price_large_room {35.0};
    const int estimate_expiry {30}; //days

    cout << "Estimate for carpet cleaning service" << endl;

    cout << "Number of small rooms: ";
    int small_room {0};
    cin >> small_room;

    cout << "Number of large rooms: ";
    int large_room {0};
    cin >> large_room;

    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;

    cout << "Cost: " << (price_small_room * small_room) + (price_large_room * large_room) << endl;
    cout << "Tax: " << (price_small_room * small_room * sales_tax) + (price_large_room * large_room * sales_tax) << endl;

    cout << "Total Estimate: " << ((price_small_room * small_room) + (price_large_room * large_room)) + 
    ((price_small_room * small_room * sales_tax) + (price_large_room * large_room * sales_tax)) << endl;
    cout << "This estimate is valid for "<< estimate_expiry << " days." << endl;

    return 0;
}