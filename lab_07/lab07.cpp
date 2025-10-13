#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream file("myfile.dat");
    if (!file) {
        cout << "error";
        return 1;
    }
    string line;
    int count = 0;
    while (getline(file, line)) {
        for (size_t i = 0; i < line.length() - 1; ++i) {
            if (line[i] == '!' && line[i + 1] == '=') {
                ++count;
                ++i;
            }
        }
    }
    file.close();
    cout << "number operation" << count << endl;

    return 0;
}