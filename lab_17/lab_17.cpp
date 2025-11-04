#include <iostream>
#include <string>
#include <cstdlib> // для atof, atoi
using namespace std;

int main() {
    string s;
    cout << "write: ";
    cin >> s;

    try {
        if (s.find('.') != string::npos) {
            float f = stof(s);
            cout << "type float: " << f << endl;
        }
        else {
            int x = stoi(s);
            cout << "type int: " << x << endl;
        }
    }
    catch (invalid_argument&) {
        cout << "error!" << endl;
    }

    return 0;
}
