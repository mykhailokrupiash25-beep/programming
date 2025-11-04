#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i = 6;
    char type;
    double y, taxRate, total, tax, net;
    cout << "Write type (A, B, C): ";
    cin >> type;
    double f1 = pow(cos(i), 2) * sin(2 * i - 1) + 4.29;
    double f2 = cos(i * i + 1) - fabs(sin(2 * i) - 5.76);
    double f3 = sin(i) - pow(cos(i), 3) * sin(pow(i, 2) - 4.2) + 4.27;
    switch (type) {
    case 'A':
    case 'a':
        y = 100 * abs(f1 * i + 2) + 50;
        taxRate = 0.10;
        break;
    case 'B':
    case 'b':
        y = 150 * abs(f2 * i + 3) + 100;
        taxRate = 0.15;
        break;
    case 'C':
    case 'c':
        y = 200 * abs(f3 * i + 4) + 135;
        taxRate = 0.20;
        break;
    default:
        cout << "erorr!" << endl;
        return 0;
    }

    total = y;
    tax = total * taxRate;
    net = total - tax;

    cout << "full = " << total << endl;
    cout << "tax = " << tax << endl;
    cout << "for pay = " << net << endl;

    return 0;
}