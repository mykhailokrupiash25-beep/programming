#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

const int N = 10;  

bool readMatrix(const string& filename, double m[N][N]) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file: " << filename << endl;
        return false;
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (!(file >> m[i][j])) {
                cout << "Error reading data from " << filename << endl;
                return false;
            }
    return true;
}

void printMatrix(double m[N][N], const string& name) {
    cout << "\nMatrix " << name << ":\n";
    for (int i = 0; i < N; i++) {
        cout << "| ";
        for (int j = 0; j < N; j++)
            cout << setw(8) << m[i][j] << " ";
        cout << "|\n";
    }
}

int main() {
    double a[N][N], b[N][N], c[N][N], T;

    cout << "Enter T: ";
    cin >> T;

    if (!readMatrix("a.txt", a) || !readMatrix("b.txt", b))
        return 1;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            c[i][j] = 3 * (pow(a[i][j], T) * b[i][j] - b[i][j]) * b[i][j];
    
    printMatrix(a, "A");
    printMatrix(b, "B");
    printMatrix(c, "C (Result)");

    return 0;
}
