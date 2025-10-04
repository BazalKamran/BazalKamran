#include <iostream>
using namespace std;

int main() {
    double fixedCommission, commissionPercent;
    double carCost;
    double minPrice, maxPrice;
    double minCommission, maxCommission;

    cout << "Enter salesperson's fixed commission: ";
    cin >> fixedCommission;
    cout << "Enter commission percentage (e.g., enter 30 for 30%): ";
    cin >> commissionPercent;
    cout << "Enter cost of the car: ";
    cin >> carCost;

    // Minimum and maximum selling prices
    minPrice = carCost + 200;
    maxPrice = carCost + 2000;

    // Commission range
    minCommission = fixedCommission + (commissionPercent / 100) * (minPrice - carCost);
    maxCommission = fixedCommission + (commissionPercent / 100) * (maxPrice - carCost);

    cout << "\nMinimum Selling Price: $" << minPrice;
    cout << "\nMaximum Selling Price: $" << maxPrice;
    cout << "\nCommission range: $" << minCommission << " to $" << maxCommission << endl;

    return 0;
}

