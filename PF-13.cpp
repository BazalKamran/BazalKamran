#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double bagCapacity;
    cout << "Enter the amount of rice a bag can hold (in pounds): ";
    cin >> bagCapacity;

    const double metricTon = 2205; 
    int numBags = ceil(metricTon / bagCapacity);

    cout << "Number of bags needed: " << numBags << endl;

    return 0;
}

