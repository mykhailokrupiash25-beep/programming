#include <iostream>
using namespace std;
unsigned long long PrintFactorial(int n) {
    if (n < 0) return 0; 
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    int n;
    cout << "Factorial calculator (enter non-negative integers, negative to stop):" << endl;
    while (true) {
        cout << "Enter a number: ";
        cin >> n;
        if (n < 0) break;
        cout << n << "! = " << PrintFactorial(n) << endl;
    }
    cout << "Factorial calculation finished." << endl;
    return 0;
}
