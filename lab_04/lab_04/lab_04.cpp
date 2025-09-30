#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i = 12;
    double a, b, c, d, e;
    cout << "Введіть значення a, b, c, d, e через пробіл: ";
    cin >> a >> b >> c >> d >> e;
    if (fabs(b + 7) <= 0 || i + 1 == 1) {
        cout << "Помилка: некоректні значення для логарифму." << endl;
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
    cout << "Результат y = " << y << endl;
    return 0;
}
