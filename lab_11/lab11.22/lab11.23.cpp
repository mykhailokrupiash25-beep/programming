#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i = 6;
    char type;
    double x, y, taxRate, total, tax, net;

start:
    cout << "enter type (A, B, C): ";
    cin >> type;

    if (type != 'A' && type != 'B' && type != 'C' &&
        type != 'a' && type != 'b' && type != 'c') {
        cout << "error type.\n";
        goto start;
    }

    double f1 = pow(cos(i), 2) * sin(2 * i - 1) + 4.29;
    double f2 = cos(i * i + 1) - fabs(sin(2 * i) - 5.76);
    double f3 = sin(i) - pow(cos(i), 3) * sin(pow(i, 2) - 4.2) + 4.27;
    if (type == 'A' || type == 'a') {
        y = 100 * abs(f1 + 2) + 50;
        taxRate = 0.10;
    }
    else if (type == 'B' || type == 'b') {
        y = 150 * abs(f2 + 3) + 100;
        taxRate = 0.15;
    }
    else {
        y = 200 * abs(f3 + 4) + 135;
        taxRate = 0.20;
    }

    total = y;
    tax = total * taxRate;
    net = total - tax;

    cout << "full = " << total << endl;
    cout << "tax = " << tax << endl;
    cout << "for pay = " << net << endl;

    return 0;
}