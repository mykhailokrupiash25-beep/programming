#include <iostream>
#include <sstream>
#include <numeric> 
#include <cmath>   

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
                numerator = 0;
                denominator = 1;
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
            return Rational(
                numerator * other.denominator + other.numerator * denominator,
                denominator * other.denominator
            );
        }

        Rational operator-(const Rational& other) const {
            return Rational(
                numerator * other.denominator - other.numerator * denominator,
                denominator * other.denominator
            );
        }

        Rational operator*(const Rational& other) const {
            return Rational(
                numerator * other.numerator,
                denominator * other.denominator
            );
        }

        Rational operator/(const Rational& other) const {
            return Rational(
                numerator * other.denominator,
                denominator * other.numerator
            );
        }
        /*friend ostream& operator<<(ostream& os, const Rational& r) {
            os << r.numerator << "/" << r.denominator;
            return os;
        }

        friend istream& operator>>(istream& is, Rational& r) {
            int p, q;
            char c;
            if (is >> p && is >> c && c == '/' && is >> q) {
                r = Rational(p, q);
            }
            else {
                is.setstate(ios::failbit);
            }
            return is;
        }*/
private:
        int numerator;
        int denominator;

        int GreatestCommonDivisor(int a, int b) const {
            if (b == 0)
                return a;
            return GreatestCommonDivisor(b, a % b);
        }
    };
ostream& operator<<(ostream& os, const Rational& r) {
    os << r.Numerator() << "/" << r.Denominator();
    return os;
}

istream& operator>>(istream& is, Rational& r) {
    int p, q;
    char c;

    if (is >> p && is >> c && c == '/' && is >> q) {
        r = Rational(p, q);
    }
    else {
        is.setstate(ios::failbit);
    }
    return is;
}

int main() {
        {
            ostringstream output;
            output << Rational(-6, 8);
            if (output.str() != "-3/4") {
                cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
                return 1;
            }
        }
        {
            istringstream input("5/7");
            Rational r;
            input >> r;
            bool equal = r == Rational(5, 7);
            if (!equal) {
                cout << "5/7 is incorrectly read as " << r << endl;
                return 2;
            }
        }
        {
            istringstream input("");
            Rational r;
            bool correct = !(input >> r);
            if (!correct) {
                cout << "Read from empty stream works incorrectly" << endl;
                return 3;
            }
        }
        {
            istringstream input("5/7 10/8");
            Rational r1, r2;
            input >> r1 >> r2;
            bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
            if (!correct) {
                cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
                return 4;
            }
            input >> r1;
            input >> r2;
            correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
            if (!correct) {
                cout << "Read from empty stream shouldn't change arguments: " << r1 << " "
                    << r2 << endl;
                return 5;
            }
        }
        {
            istringstream input1("1*2"), input2("1/"), input3("/4");
            Rational r1, r2, r3;
            input1 >> r1;
            input2 >> r2;
            input3 >> r3;
            bool correct = r1 == Rational() && r2 == Rational() && r3 == Rational();
            if (!correct) {
                cout << "Reading of incorrectly formatted rationals shouldn't change arguments: "
                    << r1 << " " << r2 << " " << r3 << endl;
                return 6;
            }
        }
        cout << "OK" << endl;
        return 0;
    }
