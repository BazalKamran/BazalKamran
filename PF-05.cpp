#include <iostream>
using namespace std;

int main() {
    double originalPrice, markupPercent, taxRate;
    double markupAmount, sellingPriceBeforeTax, taxAmount, finalPrice;

    cout << "Enter original price of the item: ";
    cin >> originalPrice;

    cout << "Enter markup percentage: ";
    cin >> markupPercent;

    cout << "Enter sales tax rate (percentage): ";
    cin >> taxRate;

    markupAmount = originalPrice * (markupPercent / 100);
    sellingPriceBeforeTax = originalPrice + markupAmount;
    taxAmount = sellingPriceBeforeTax * (taxRate / 100);
    finalPrice = sellingPriceBeforeTax + taxAmount;

    cout << "\nOriginal Price: " << originalPrice;
    cout << "\nMarkup Amount: " << markupAmount;
    cout << "\nSelling Price Before Tax: " << sellingPriceBeforeTax;
    cout << "\nSales Tax: " << taxAmount;
    cout << "\nFinal Price: " << finalPrice << endl;

    return 0;
}

