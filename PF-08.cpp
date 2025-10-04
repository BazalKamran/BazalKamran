#include <iostream>
using namespace std;

int main() {
    double advertisedGB, actualGB;

    cout << "Enter advertised hard drive size (in GB): ";
    cin >> advertisedGB;

    actualGB = advertisedGB * (1000.0 / 1024) * (1000.0 / 1024);

    cout << "Actual storage capacity ˜ " << actualGB << " GB" << endl;

    return 0;
}

