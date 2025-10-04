#include <iostream>
#include <cmath> // for round()
using namespace std;

int main() {
    double totalMilk, costPerLiter = 0.38, profitPerCarton = 0.27;
    int numCartons;
    double costOfMilk, totalProfit;

    cout << "Enter total amount of milk produced (in liters): ";
    cin >> totalMilk;

    numCartons = round(totalMilk / 3.78);

    costOfMilk = totalMilk * costPerLiter;
    totalProfit = numCartons * profitPerCarton;

    cout << "Number of cartons needed: " << numCartons << endl;
    cout << "Cost of producing milk: $" << costOfMilk << endl;
    cout << "Total profit: $" << totalProfit << endl;

    return 0;
}

