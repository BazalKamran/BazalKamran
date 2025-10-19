#include <iostream>
using namespace std;
int main() {
    int number, digit, count = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    while (number > 0) {
        int rem = number % 10;
        if (rem == digit)
            count++;
        number /= 10;
    }
    cout << "Frequency: " << count << endl;
    return 0;
}
