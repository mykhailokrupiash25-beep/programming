#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int i = 6;
    double a = 0.0, b = 1.0;
    int k = i;

    do {
        a += (fabs(sin(12 * k) * cos(fabs(2 * k)) / 3.0) + 4.21) * k;
        k++;
    } while (k <= i + 5);

    k = i;
    do {
        b *= ((pow(cos(k), 3) / 2.1) + (pow(cos(k), 2) * 1.8) - 3 * sin(3 * k + 1)) * k;
        k++;
    } while (k <= i + 8);

    double z = sin(a) + b;

    cout << fixed << setprecision(2);
    cout << "z = " << z << endl;

    return 0;
}
