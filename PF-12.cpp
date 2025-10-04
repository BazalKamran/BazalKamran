#include <iostream>
using namespace std;

int main() {
    double M1, M2, distance;
    const double k = 6.67e-8;
    double force;

    cout << "Enter mass of first body (in grams): ";
    cin >> M1;
    cout << "Enter mass of second body (in grams): ";
    cin >> M2;
    cout << "Enter distance between the bodies (in cm): ";
    cin >> distance;

    force = k * (M1 * M2) / (distance * distance);

    cout << "Gravitational Force: " << force << " dynes" << endl;

    return 0;
}

