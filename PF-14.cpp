#include <iostream>
using namespace std;

int main() {
    int numShares;
    double purchasePrice, sellingPrice;
    const double SERVICE_RATE = 0.015;

    // Input
    cout << "Enter number of shares sold: ";
    cin >> numShares;
    cout << "Enter purchase price per share: $";
    cin >> purchasePrice;
    cout << "Enter selling price per share: $";
    cin >> sellingPrice;

    // Calculations
    double totalInvestment = numShares * purchasePrice;
    double purchaseServiceCharge = totalInvestment * SERVICE_RATE;

    double totalSales = numShares * sellingPrice;
    double sellingServiceCharge = totalSales * SERVICE_RATE;

    double totalServiceCharges = purchaseServiceCharge + sellingServiceCharge;
    double amountAfterSelling = totalSales - sellingServiceCharge;

    double profitOrLoss = amountAfterSelling - totalInvestment - purchaseServiceCharge;

    // Output (No if statement used)
    cout << "\n----- Result -----\n";
    cout << "Total amount invested: $" << totalInvestment << endl;
    cout << "Total service charges: $" << totalServiceCharges << endl;
    cout << "Amount received after selling: $" << amountAfterSelling << endl;
    cout << "Profit/Loss (negative means loss): $" << profitOrLoss << endl;

    return 0;
}

