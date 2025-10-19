#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x < 200) c1++;
        else if (x < 400) c2++;
        else if (x < 600) c3++;
        else if (x < 800) c4++;
        else c5++;
    }

    cout << (c1 * 100.0 / n) << "%" << endl;
    cout << (c2 * 100.0 / n) << "%" << endl;
    cout << (c3 * 100.0 / n) << "%" << endl;
    cout << (c4 * 100.0 / n) << "%" << endl;
    cout << (c5 * 100.0 / n) << "%" << endl;

    return 0;
}

