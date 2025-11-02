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

    cout << "write x: ";
    cin >> x;
    double f = 6 * (pow(cos(x), 2) * sin(2 * x - 1) + 4.29);

    if (type == 'A' || type == 'a') {
        y = 100 * abs(i + 2) + 50;
        taxRate = 0.10;
    }
    else if (type == 'B' || type == 'b') {
        y = 150 * abs(i + 3) + 100;
        taxRate = 0.15;
    }
    else {
        y = 200 * abs(i + 4) + 135;
        taxRate = 0.20;
    }

    total = y;
    tax = total * taxRate;
    net = total - tax;

    cout << "f(x) = " << f << endl;
    cout << "full = " << total << endl;
    cout << "tax = " << tax << endl;
    cout << "for pay = " << net << endl;

    return 0;
}