#include <iostream>
#include <iomanip>
#include <cstdlib>  
using namespace std;

int main() {
    int Gol[6][5];
    int k[6], n[5];
    int i, j;
    int sum[5] = { 0 };
    srand(time(NULL));
   
    for (i = 0; i < 6; i++) {
        k[i] = i + 1;
    }
    for (i = 0; i < 5; i++) {
        n[i] = i + 1;
    }

    cout << "-----------------------------------------------\n";
    cout << "| k\\n |"; 
    for (j = 0; j < 5; j++) {
        cout << setw(6) << n[j] << " |";
    }
    cout << "\n-----------------------------------------------\n";

    for (i = 0; i < 6; i++) {
        cout << "|" << setw(4) << k[i] << " |";  
        for (j = 0; j < 5; j++) {
            Gol[i][j] = rand() % 500 + 50;  
            cout << setw(6) << Gol[i][j] << " |";
            sum[j] += Gol[i][j];
        }
        cout << "\n-----------------------------------------------\n";
    }
    cout << "| sum |";
    for (j = 0; j < 5; j++) {
        cout << setw(6) << sum[j] << " |";
    }
    cout << "\n-----------------------------------------------\n";
    return 0;
}
