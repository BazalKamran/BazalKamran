#include <iostream>
using namespace std;

int main() {
    double tankCapacity, milesPerGallon, totalMiles;

    cout << "Enter fuel tank capacity (in gallons): ";
    cin >> tankCapacity;

    cout << "Enter miles per gallon: ";
    cin >> milesPerGallon;

    totalMiles = tankCapacity * milesPerGallon;

    cout << "The automobile can travel " << totalMiles << " miles without refueling." << endl;

    return 0;
}

