#include <iostream>
using namespace std;
void PrintSymbol(char symbol, int count) {
    if (count == 0) {
        cout << "number = 0 error" << endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << symbol;
    }
    cout << endl;
}
int main() {
    char ch;
    int num;
    cout << "write sym: ";
    cin >> ch;
    cout << "write number(not 0): ";
    cin >> num;
    PrintSymbol(ch, num);
    return 0;
}
