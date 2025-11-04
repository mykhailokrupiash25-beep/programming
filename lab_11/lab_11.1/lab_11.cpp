#include <iostream>
#include <string>
using namespace std;

int main() {
    char first, second;
    cout << "enter: ";
    cin >> first >> second;
    
    m:
    switch (first) {
    case 'A':
        switch (second) {
            case 'L': cout << "Alabama\n"; break;
            case 'K': cout << "Alaska\n"; break;
            case 'Z': cout << "Arizona\n"; break;
            case 'R': cout << "Arkansas\n"; break;
        }
        break;
    case 'C':
        switch (second) {
            case 'A': cout << "California\n"; break;
            case 'O': cout << "Colorado\n"; break;
            case 'T': cout << "Connecticut\n"; break;
        }
        break;
    case 'D':
        cout << "Delaware\n";
        break;
    case 'F':
        cout << "Florida\n";
        break;
        case 'G':
        cout << "Georgia\n";
            break;
    case 'H':
        cout << "Hawaii\n";
        break;
    case 'T':
            switch (second) {
            case 'N': cout << "Tennessee\n"; break;
            case 'X': cout << "Texas\n"; break;
            }
            break;
    case 'N':
            switch (second) {
            case 'Y': cout << "New York\n"; break;
            case 'J': cout << "New Jersey\n"; break;
            case 'M': cout << "New Mexico\n"; break;
            case 'C': cout << "North Carolina\n"; break;
            case 'D': cout << "North Dakota\n"; break;
            }
            break;
    case 'O':
            switch (second) {
            case 'H': cout << "Ohio\n"; break;
            case 'R': cout << "Oregon\n"; break;
            case 'K': cout << "Oklahoma\n"; break;
            }
            break;
    case 'W':
            switch (second) {
            case 'A': cout << "Washington\n"; break;
            case 'V': cout << "West Virginia\n"; break;
            case 'I': cout << "Wisconsin\n"; break;
            case 'Y': cout << "Wyoming\n"; break;
            }
            break;
    default:
        cout << "error enter \nenter:";
        cin >> first >> second;
        goto m;
    }

    return 0;
}