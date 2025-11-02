#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i = 6;
    char type;
    double x, y, taxRate, total, tax, net;
    cout << "Write type (A, B, C): ";
    cin >> type;
    cout << "Write x: ";
    cin >> x;
    double f = 6 * (pow(cos(x), 2) * sin(2 * x - 1) + 4.29);
    switch (type) {
    case 'A':
    case 'a':
        y = 100 * abs(i + 2) + 50;
        taxRate = 0.10;
        break;
    case 'B':
    case 'b':
        y = 150 * abs(i + 3) + 100;
        taxRate = 0.15;
        break;
    case 'C':
    case 'c':
        y = 200 * abs(i + 4) + 135;
        taxRate = 0.20;
        break;
    default:
        cout << "erorr!" << endl;
        return 0;
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