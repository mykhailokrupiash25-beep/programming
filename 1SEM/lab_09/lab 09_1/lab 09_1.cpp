#include <iostream>
using namespace std;
double PrintTemp(double celsius) {
    return 1.8 * celsius + 32.0;
}
int main() {
    double celsius;
    cout << "Please enter the temperature in degrees Celsius: ";
    cin >> celsius;

    double fahrenheit = PrintTemp(celsius);
    cout << celsius << " degrees Celsius is equal to "
        << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}
