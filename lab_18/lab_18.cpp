#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

struct Trip {
    string Surname;
    string Country;
    string City;
    int Days;
    double Price;
    string Month;
};

void PrintTrip(const Trip& t) {
    cout << left << setw(10) << t.Surname
        << setw(12) << t.Country
        << setw(12) << t.City
        << setw(6) << t.Days
        << setw(8) << t.Price
        << setw(10) << t.Month << endl;
}

int GetFieldId(const string& field) {
    static map<string, int> fieldMap = {
        {"Surname", 1}, {"Country", 2}, {"City", 3},
        {"Days", 4}, {"Price", 5}, {"Month", 6}
    };
    auto it = fieldMap.find(field);
    return (it != fieldMap.end()) ? it->second : -1;
}

void Search(Trip trips[], int size, const string& field, const string& value) {
    int fieldId = GetFieldId(field);
    if (fieldId == -1) {
        cout << "error 1: " << field << endl;
        return;
    }

    cout << left << setw(10) << "Surname"
        << setw(12) << "Country"
        << setw(12) << "City"
        << setw(6) << "Days"
        << setw(8) << "Price"
        << setw(10) << "Month" << endl;
    cout << "-----------------------------------------------------------\n";

    bool found = false;
    int i = 0;
    while (i < size) {
        switch (fieldId) {
        case 1: if (trips[i].Surname == value) { PrintTrip(trips[i]); found = true; } break;
        case 2: if (trips[i].Country == value) { PrintTrip(trips[i]); found = true; } break;
        case 3: if (trips[i].City == value) { PrintTrip(trips[i]); found = true; } break;
        case 4: if (trips[i].Days == stoi(value)) { PrintTrip(trips[i]); found = true; } break;
        case 5: if ((int)trips[i].Price == stoi(value)) { PrintTrip(trips[i]); found = true; } break;
        case 6: if (trips[i].Month == value) { PrintTrip(trips[i]); found = true; } break;
        }
        i++;
    }

    if (!found) cout << "error not found.\n";
}

int main() {
    Trip trips[10] = {
        {"Fedishn", "Turkia", "Ankara", 14, 1350, "July"},
        {"Kovalska", "Turkia", "Stambul", 7, 900, "June"},
        {"Golinei", "Ispania", "Madrid", 7, 1100, "June"},
        {"Golinei", "Italia", "Rim", 12, 800, "July"},
        {"Melnik", "Brazil", "Brasilia", 30, 1480, "August"},
        {"Knuchuk", "Egypt", "Kair", 9, 1150, "July"},
        {"Dimyan", "Maldivi", "Male", 12, 1750, "June"},
        {"Fedishn", "Pakistan", "Lahor", 14, 600, "August"},
        {"Mazurak", "Izrail", "Palistina", 14, 700, "July"},
        {"Mazurak", "Iran", "Tehran", 20, 500, "August"},
    };
    cout << left << setw(10) << "Surname"
        << setw(12) << "Country"
        << setw(12) << "City"
        << setw(6) << "Days"
        << setw(8) << "Price"
        << setw(10) << "Month" << endl;
    cout << string(58, '-') << endl;
    for (int i = 0; i < 10; i++) {
        PrintTrip(trips[i]);
    }
    string operation, field, value;
    cout << "what you want Search (Surname / Country / City / Days / Price / Month): ";
    cin >> field;
    cout << "write search: ";
    cin >> value;
    Search(trips, 10, field, value);
}