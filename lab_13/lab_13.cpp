#include <iostream>
#include <iomanip>
using namespace std;
double f(double x) {
    return (sin(x) * pow(cos(x), 2) * sin(x + 1.4)) / 0.85 + 7.14;
}
double findMax(double x0, double h, int n) {
    double maxY = f(x0);
    double x = x0;

    for (int k = 1; k <= n; k++) {
        x += h;
        double y = f(x);
        if (y > maxY) {
            maxY = y;
        }
    }
    return maxY;
}
double findNegative(double x0, double h, int n) {
    double x = x0;

    for (int k = 0; k <= n; k++) {
        double y = f(x);
        if (y < 0) {
            return x;
        }
        x += h;
    }

    return NAN;
}
int main(){
    int k;
    int i = 6;
    double h = 0.1 * i;
    double x, y;
    cin >> x;
    y = f(x);
    cout << "-----------------------\n";
    cout << "|" << setw(10) << 'x' << "|" << setw(10) << 'y' << "|\n" ;
    cout << "-----------------------\n";
    for (k = 0; k <= 6; k++) {
        cout << "-----------------------\n";
        cout << fixed << setprecision(2);
        cout << "|" << setw(10) << x << "|" << setw(10) << y << "|\n";
        cout << "-----------------------\n";
        x += h;
        y = f(x);
    }
    cout << "-----------------------\n";
    double maxValue = findMax(x, h, 6);
    cout << "max value f = " << maxValue << endl;
    double negX = findNegative(x, h, 6);
    if (isnan(negX))
        cout << "- not found." << endl;
    else
        cout << "first negativ value x = " << negX
        << ", f(x) = " << f(negX) << endl;
}
