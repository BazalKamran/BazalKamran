#include <iostream>
#include <cmath>  // For round()
using namespace std;

int main() {
    double n1, n2, n3, n4, n5, sum;
    int roundedSum;

    cout << "Enter five decimal numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    sum = n1 + n2 + n3 + n4 + n5;
    roundedSum = round(sum);

    cout << "Rounded sum = " << roundedSum << endl;

    return 0;
}

