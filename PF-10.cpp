#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels;
    int totalPennies;

    cout << "Enter the number of quarters: ";
    cin >> quarters;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of nickels: ";
    cin >> nickels;

    totalPennies = quarters * 25 + dimes * 10 + nickels * 5;

    cout << "Total value in pennies: " << totalPennies << " cents" << endl;

    return 0;
}

