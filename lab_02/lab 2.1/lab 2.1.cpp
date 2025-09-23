#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double fuel1, fuel2, fuel3, fuel4;
	double startride, endride;
	cout << "Enter fuel amount ";
	cin >> fuel1;
	cout << "Enter fuel amount ";
	cin >> fuel2;
	cout << "Enter fuel amount ";
	cin >> fuel3;
	cout << "Enter fuel amount ";
	cin >> fuel4;
	cout << "Enter starting odometer reading ";
	cin >> startride;
	cout << "Enter ending odometer reading ";
	cin >> endride;
	double total_fuel = fuel1 + fuel2 + fuel3 + fuel4;
	double distance = endride - startride;
	double vaste_fuel = distance / total_fuel;
	cout << fixed << setprecision(2);
	cout << "Fuel consumption (km per liter)" << vaste_fuel;
	return 0;
}