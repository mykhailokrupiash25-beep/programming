#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i = 12;
    double a, b, c, d, e;
    cout << "write a";
    cin >> a;
    cout << "write b";
    cin >> b;
    cout << "write c";
    cin >> c;
    cout << "write d";
    cin >> d;
    cout << "write e";
    cin >> e;
    if (fabs(b + 7) <= 0 || i + 1 == 1) {
        cout << "error" << endl;
        return 1;
    }
    double fi = tan(i + a) - log(fabs(b + 7)) / log(i + 1); 
    double omega = c * sqrt(pow(i, 2) + d * pow(e, 1.3));
    double x, y;
    if (i < 10) {
        x = fi;
        y = 2 * sin(x) * sin(2 * x - 1.5) * cos(2 * x + 1.5) - 6;
    }
    else {
        x = omega;
        y = fabs(cos(pow(x, 2) - 0.51)) * sin(3 * x - 4) - 4.44;
    }
    cout << "y = " << y << endl;
    return 0;
}
