#include <iostream>
using namespace std;

class Rational {
public:
    Rational() {
        numerator = 0;
        denominator = 1;
    }

    Rational(int p, int q) {
        if (q == 0) {
            cout << "Error: denominator cannot be zero" << endl;
            denominator = 1;
            numerator = 0;
            return;
        }

        if (p == 0) {
            numerator = 0;
            denominator = 1;
            return;
        }

        if (q < 0) {
            p = -p;
            q = -q;
        }

        int gcd = GreatestCommonDivisor(abs(p), abs(q));
        numerator = p / gcd;
        denominator = q / gcd;
    }

    int Numerator() const {
        return numerator;
    }

    int Denominator() const {
        return denominator;
    }
    bool operator==(const Rational& other) const {
        return numerator == other.numerator &&
            denominator == other.denominator;
    }

    Rational operator+(const Rational& other) const {
        int new_num = numerator * other.denominator + other.numerator * denominator;
        int new_den = denominator * other.denominator;
        return Rational(new_num, new_den);
    }

    Rational operator-(const Rational& other) const {
        int new_num = numerator * other.denominator - other.numerator * denominator;
        int new_den = denominator * other.denominator;
        return Rational(new_num, new_den);
    }

    Rational operator*(const Rational& other) const {
        int new_num = numerator * other.numerator;
        int new_den = denominator * other.denominator;
        return Rational(new_num, new_den);
    }

    Rational operator/(const Rational& other) const {
        int new_num = numerator * other.denominator;
        int new_den = other.numerator * denominator;
        return Rational(new_num, new_den);
    }

private:
    int numerator;
    int denominator;
    int GreatestCommonDivisor(int a, int b) const {
        if (b == 0)
            return a;
        return GreatestCommonDivisor(b, a % b);
    }
};

int main() {
    {
        Rational a(2, 3);
        Rational b(4, 3);
        Rational c = a * b;
        bool equal = c == Rational(8, 9);
        if (!equal) {
            cout << "2/3 * 4/3 != 8/9" << endl;
            return 1;
        }
    }
    {
        Rational a(5, 4);
        Rational b(15, 8);
        Rational c = a / b;
        bool equal = c == Rational(2, 3);
        if (!equal) {
            cout << "5/4 / 15/8 != 2/3" << endl;
            return 2;
        }
    }
    cout << "OK" << endl;
    return 0;
}