#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;

    while (true) {
        cout << "enter: ";
        cin >> a;
        for (char& c : a)
            c = toupper(c);

        if (a.size() != 2) {
            cout << "error cin many\n";
            continue;
        }

        char first = a[0];
        char second = a[1];

        bool found = true;

        switch (first) {
        case 'A':
            switch (second) {
            case 'L': cout << "Alabama\n"; break;
            case 'K': cout << "Alaska\n"; break;
            case 'Z': cout << "Arizona\n"; break;
            case 'R': cout << "Arkansas\n"; break;
            default: found = false;
            }
            break;
        case 'C':
            switch (second) {
            case 'A': cout << "California\n"; break;
            case 'O': cout << "Colorado\n"; break;
            case 'T': cout << "Connecticut\n"; break;
            default: found = false;
            }
            break;
        case 'D':
            if (second == 'E') cout << "Delaware\n";
            else found = false;
            break;
        case 'F':
            if (second == 'L') cout << "Florida\n";
            else found = false;
            break;
        case 'G':
            if (second == 'A') cout << "Georgia\n";
            else found = false;
            break;
        case 'H':
            if (second == 'I') cout << "Hawaii\n";
            else found = false;
            break;
        case 'T':
            switch (second) {
            case 'N': cout << "Tennessee\n"; break;
            case 'X': cout << "Texas\n"; break;
            default: found = false;
            }
            break;
        case 'N':
            switch (second) {
            case 'Y': cout << "New York\n"; break;
            case 'J': cout << "New Jersey\n"; break;
            case 'M': cout << "New Mexico\n"; break;
            case 'C': cout << "North Carolina\n"; break;
            case 'D': cout << "North Dakota\n"; break;
            default: found = false;
            }
            break;
        case 'O':
            switch (second) {
            case 'H': cout << "Ohio\n"; break;
            case 'R': cout << "Oregon\n"; break;
            case 'K': cout << "Oklahoma\n"; break;
            default: found = false;
            }
            break;
        case 'W':
            switch (second) {
            case 'A': cout << "Washington\n"; break;
            case 'V': cout << "West Virginia\n"; break;
            case 'I': cout << "Wisconsin\n"; break;
            case 'Y': cout << "Wyoming\n"; break;
            default: found = false;
            }
            break;
        default:
            found = false;
        }

        if (!found) {
            cout << "error cin found\n";
            continue;
        }
        break;
    }

    return 0;
}