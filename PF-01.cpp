#include <iostream>
using namespace std;

int main() {
    double s1, s2, s3, s4, s5, average;

    cout << "Enter five test scores: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    average = (s1 + s2 + s3 + s4 + s5) / 5;

    cout << "Average test score = " << average << endl;

    return 0;
}

