#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

double f(double x) {
    return (cos(2.1 * x) * sin(fabs(x))) / 0.15 - 5.8;
}

int main() {
    const int n = 7;
    vector<double> y(n);
    cout << fixed << setprecision(2);

    for (int k = 0; k < n; ++k) {
        y[k] = f(k + 1); 
    }

    for (int k = 0; k < n; ++k) {
        cout << "y[" << k + 1 << "] = " << y[k] << endl;
    }

    int negative_count = 0;
    int fifth_negative_index = -1;
    for (int k = 0; k < n; ++k) {
        if (y[k] < 0) {
            negative_count++;
            if (negative_count == 5) {
                fifth_negative_index = k + 1; 
                break;
            }
        }
    }

    if (fifth_negative_index != -1) {
        cout << "score five negativ: " << fifth_negative_index << endl;
    }
    else {
        cout << "no five negative." << endl;
    }

    return 0;
}