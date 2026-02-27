#include <iostream>
#include <fstream>  
using namespace std;
int main(){
    ifstream fin("input.txt");
    if (!fin.is_open()) {
        cout << "cant open file!" << endl;
        return 1;
    }
    double num, sum = 0;
    int count = 0;
    while (fin >> num) {  
        sum += num;
        count++;
    } 
    if (count == 0) {
        cout << "no number";
        return 1;
    }
    fin.close();
    sum /= count;
    ofstream fout;
    if (sum > 0) {
        fout.open("plus.rez");
    }
    else {
        fout.open("minus.rez");
    }
    if (!fout.is_open()) {
        cout << "cant open file!" << endl;
        return 1;
    }
    fout << "average = " << sum;
    fout.close();
    
    cout << "all done" << endl;
    return 0;
}