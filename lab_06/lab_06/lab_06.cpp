#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double unit_value, step, rows, a, b, c;
    cout << "first value ";
    cin >> unit_value;
    cout << "step ";
    cin >> step;
    a = unit_value;
    b = a * 1.2;
    c = a * 4.546;
    cout << "--------------------------------------" << "\n";
    cout << "|" << setw(11) << "galon (Brit)" << "|" << setw(11) << " galon(USA) " << "|" << setw(11) << "liters  " "|" << "\n";
    cout << "--------------------------------------" << "\n";
    cout << "|" << setw(11) << a << "|" << setw(11) << b << "|" << setw(11) << c << " |" << "\n";
    cout << "--------------------------------------" << "\n";
    rows = 0;
    while (rows <= 10) {
        rows += 1;
        a += step;
        b = a * 1.2;
        c = a * 4.546;
        cout << "--------------------------------------" << "\n";
        cout << "|" << setw(11) << a << "|" << setw(11) << b << "|" << setw(11) << c << " |" << "\n";
        cout << "--------------------------------------" << "\n";
    }
}
