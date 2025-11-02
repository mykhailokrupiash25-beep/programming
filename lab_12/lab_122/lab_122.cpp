#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int i = 6;
    double a = 0.0, b = 1.0;
    double x;
    cout << "write x = ";
    cin >> x;
    double f11 = fabs(sin(12 * x) * cos(fabs(2 * x)) / 3.0) + 4.21;
    double f12 = pow(cos(x), 3) / 2.1 + pow(cos(x), 2) * 1.8 - 3 * sin(3 * x + 1);
    
    for (int k = i; k <= i + 5; ++k) {
        a += f11 * k;
    }

    for (int k = i; k <= i + 8; ++k) {
        b *= f12 * k;
    }

    double  z = sin(a) + b; 

    cout << fixed << setprecision(2);
    cout << "z = " << z << endl;

    return 0;
}