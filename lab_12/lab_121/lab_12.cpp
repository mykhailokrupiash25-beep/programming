#include <iostream>
using namespace std;
int main(){
    char x;
    do {
        cout << "Write (Q,Z end program) ";
        cin >> x;
        switch (x){
        case 'A':
        case 'B':
        case 'C':
        case 'a':
        case 'b':
        case 'c':
            cout << "Your number " << 2 << endl;
            break;
        case 'D':
        case 'E':
        case 'F':
        case 'd':
        case 'e':
        case 'f':
            cout << "Your mumber " << 3 << endl;
            break;
        case 'G':
        case 'H':
        case 'I':
        case 'g':
        case 'h':
        case 'i':
            cout << "Your number " << 4 << endl;
            break;
        case 'J':
        case 'K':
        case 'L':
        case 'j':
        case 'k':
        case 'l':
            cout << "Your number " << 5 << endl;
            break;
        case 'M':
        case 'N':
        case 'O':
        case 'm':
        case 'n':
        case 'o':
            cout << "Your number " << 6 << endl;
            break;
        case 'P':
        case 'R':
        case 'S':
        case 'p':
        case 'r':
        case 's':
            cout << "Your number " << 7 << endl;
            break;
        case 'T':
        case 'U':
        case 'V':
        case 't':
        case 'u':
        case 'v':
            cout << "Your number " << 8 << endl;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'w':
        case 'x':
        case 'y':
            cout << "Your number " << 9 << endl;
            break;
        }cout << "exit";
    } while(x != 'Q' && x != 'Z' && x != 'q' && x != 'z');
    return 0;
}