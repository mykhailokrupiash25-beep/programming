#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double k) {
    return fabs(pow(cos(k), 2) - 0.51) * sin(3 * k - 4) - 4.44;
}

double sumProfit(int maxK) {
    double sum = 0;
    for (int k = 0; k <= maxK; k++) {
        double y = 100 * f(k);
        if (y >= 0 && y <= 710) {
            sum += y;
        }
    }
    return sum;
}

int findWorstYear(int years[], int size) {
    double minY = 100 * f(years[0]);
    int worstYear = years[0];

    for (int i = 1; i < size; i++) {
        double y = 100 * f(years[i]);
        if (y < minY) {
            minY = y;
            worstYear = years[i];
        }
    }

    cout << "The amount of damages in " << worstYear << " year: "
        << fixed << setprecision(2) << 100 * f(worstYear) << endl;
    return worstYear;
}

int main() {
    int years[11];
    years[0] = 2000;

    for (int c = 1; c < 11; c++) {
        years[c] = years[c - 1] + 1;
    }

    cout << "-----------------------\n";
    cout << "|" << setw(10) << "year" << "|" << setw(10) << "amount" << "|\n";
    cout << "-----------------------\n";

    cout << fixed << setprecision(2);

    for (int c = 0; c < 11; c++) {
        double y = 100 * f(years[c]);
        cout << "|" << setw(10) << years[c] << "|" << setw(10) << y << "|\n";
        cout << "-----------------------\n";
    }

    double total = sumProfit(710);  
    cout << "\nSum of amount  = " << total << endl;

    findWorstYear(years, 11);

    return 0;
}
