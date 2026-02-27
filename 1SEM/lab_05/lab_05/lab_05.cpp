#include <iostream>
#include <cmath>  
using namespace std;
int main() {
    long studentID;
    int grade1, grade2, grade3, grade4;
    cout << "write number zalikovoi books ";
    cin >> studentID;
    cout << "write marks ";
    cin >> grade1;
    cout << "write marks ";
    cin >> grade2;
    cout << "write marks ";
    cin >> grade3;
    cout << "write marks ";
    cin >> grade4;
    float average = fabs((grade1 + grade2 + grade3 + grade4) / 4.0);
    cout << "number studen " << studentID << endl;
    cout << "avarage score " << average << endl;
    if (average < 3 || average > 5) {
        cout << "dont nice";
    }
    else {
        if (average < 4) {
            cout << "normal score";
        }
        else {
            if (average == 5) {
                cout << "very goooood";
            }
            else {
                cout << "nice";
            }
        }
    }
    return 0;
}