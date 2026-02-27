#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f17(int k) {
    return fabs(pow(cos(2 * k), 3) + 2 * sin(k / 1.2 - 3.4) + 10.51 * cos(fabs(3 * k)));
}

double f18(int n) {
    return fabs(sin((pow(n, 2) / 1.5 - 2)) + 11.73 * cos(1.6 * n - 1));
}

int main() {
    double a[4][4];
    int k[4], n[4];

    for (int i = 0; i < 4; i++) {
        k[i] = i + 1;
        n[i] = i + 1;
    }

    double dob = 1;

    for (int i = 0; i < 4; i++) {
        cout << "|";
        for (int j = 0; j < 4; j++) {
            a[i][j] = n[i] * f17(k[j]) + sin(k[j]) * f18(n[i]);

            if (fabs(a[i][j]) < 3) {
                dob *= pow(a[i][j], 2);
            }
            int a_round = int(a[i][j] + 0.5);
            cout << setw(3) << a_round << " ";
        }
        cout << "|\n";
    }

    cout << "dobutok = " << dob << endl;

    return 0;
}