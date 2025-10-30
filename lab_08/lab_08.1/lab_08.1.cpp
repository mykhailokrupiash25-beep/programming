#include <iostream>
#include <iomanip> 
using namespace std;
void Calc(double op1, char oper, double op2) {
    if (oper == '*') {
        cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
    }
    else if (oper == '+') {
        cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
    }
    else if (oper == '-') {
        cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
    }
    else if (oper == '/') {
        if (op2 == 0) {
            cout << "zero error!" << endl;
        }
        else {
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
        }
    }
    else {
        cout << "fatal error." << endl;
    }
}

int main() {
    cout << fixed << setprecision(2); 

    char choice = 'Y';
    while (choice != 'N' && choice != 'n') {
        double op1, op2;
        char oper;

        cout << "write first number ";
        cin >> op1;

        cout << "write operator (+, -, *, /): ";
        cin >> oper;

        cout << "write second number ";
        cin >> op2;

        Calc(op1, oper, op2);

        cout << "want countine? (Y/N): ";
        cin >> choice;

        cout << endl;
    }

    cout << "end." << endl;
    return 0;
}
