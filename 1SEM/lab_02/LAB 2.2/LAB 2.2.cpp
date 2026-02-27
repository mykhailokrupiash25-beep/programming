#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int grade1, grade2, grade3;
    double weight1, weight2, weight3;
    cout << "Enter grade and its weight coefficient ";
    cin >> grade1 >> weight1;
    cout << "Enter grade and its weight coefficient ";
    cin >> grade2 >> weight2;
    cout << "Enter grade and its weight coefficient ";
    cin >> grade3 >> weight3;
    double weightedAverage = (grade1 * weight1 + grade2 * weight2 + grade3 * weight3) / (weight1 + weight2 + weight3);
    cout << fixed << setprecision(2);
    cout << "Grade " << grade1 << ", weight: " << weight1 << endl;
    cout << "Grade " << grade2 << ", weight: " << weight2 << endl;
    cout << "Grade " << grade3 << ", weight: " << weight3 << endl;
    cout << "Weighted average grade: " << weightedAverage << endl;
    return 0;
}
