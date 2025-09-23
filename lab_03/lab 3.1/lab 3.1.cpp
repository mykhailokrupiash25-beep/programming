#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double R = 1740;
    double S, V;
    const double PE = 3.1415926535;
    S = 4 * PE * pow(R, 2);
    V = 4.0 / 3 * PE * pow(R, 3);
    cout << fixed << setprecision(2);
    cout << "S = " << S << "  V = " << V << endl;
    return 0;
}