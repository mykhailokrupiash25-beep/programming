#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int i, Ax, Ay, Bx, By, Cx, Cy;
    i = 12;
    Ax = 0;
    Ay = 0;
    Bx = i;
    By = i - 1;
    Cx = Bx;
    Cy = i + 1;
    double a = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
    double b = sqrt(pow(Cx - Bx, 2) + pow(Cy - By, 2));
    double c = sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2));
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    double r = S / p;
    double median_c = 0.5 * sqrt(2 * pow(a,2) + 2 * pow(b,2)- pow(c,2));
    cout << fixed << setprecision(2);
    cout << "mc = " << median_c << endl;
    cout << "r =" << r << endl;
    return 0;
}
