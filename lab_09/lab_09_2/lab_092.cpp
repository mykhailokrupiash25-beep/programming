#include <iostream>
using namespace std;
double PrintGarm(double x, double y) {
    if (x + y == 0) return 0; 
    return 2.0 * x * y / (x + y);
}
int main() {
    double x, y;
    cout << "Harmonic mean calculator (enter a pair of numbers, 0 to stop):" << endl;
    while (true) {
        cout << "Enter fist numbers: ";
        cin >> x;
        cout << "Enter second numbers: ";
        cin >> y;
        if (x == 0 || y == 0) break;
        double result = PrintGarm(x, y);
        cout << "Harmonic mean: " << result << endl;
    }
    cout << "Harmonic mean calculation finished." << endl;
    return 0;
}
