#include <iostream>
using namespace std;

int main() {
    double payRate, hoursPerWeek;
    int weeks = 5;

    cout << "Enter your hourly pay rate: ";
    cin >> payRate;
    cout << "Enter number of hours you worked per week: ";
    cin >> hoursPerWeek;

    double incomeBeforeTax = payRate * hoursPerWeek * weeks;
    double tax = 0.14 * incomeBeforeTax;
    double incomeAfterTax = incomeBeforeTax - tax;

    double clothes = 0.10 * incomeAfterTax;
    double supplies = 0.01 * incomeAfterTax;
    double remaining = incomeAfterTax - (clothes + supplies);

    double savingsBonds = 0.25 * remaining;
    double parentsContribution = 0.50 * savingsBonds;

    cout << "\nIncome before tax: $" << incomeBeforeTax;
    cout << "\nIncome after tax: $" << incomeAfterTax;
    cout << "\nMoney spent on clothes and accessories: $" << clothes;
    cout << "\nMoney spent on school supplies: $" << supplies;
    cout << "\nMoney spent to buy savings bonds: $" << savingsBonds;
    cout << "\nMoney parents spent to buy savings bonds: $" << parentsContribution << endl;

    return 0;
}
