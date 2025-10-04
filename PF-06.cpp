#include <iostream>
#define PI 3.141593
using namespace std;

int main() {
    double radius, area;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of circle = " << area << endl;

    return 0;
}

