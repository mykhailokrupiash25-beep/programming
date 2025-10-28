#include <iostream>
#include <iomanip>
using namespace std;

double CrewMoment(int crew, double PERSON_WT) {
    return crew * PERSON_WT * 143;
}
double PassengerMoment(int passengers, double PERSON_WT) {
    double moment = 0.0;
    for (int i = 1; i <= passengers; i++) {
        double dist;
        if (i <= 2) dist = 265;
        else if (i <= 4) dist = 219;
        else if (i <= 6) dist = 295;
        else dist = 386;
        moment += PERSON_WT * dist;
    }
    return moment;
}
double CargoMoment(double baggage, double closet) {
    return baggage * 386 + closet * 182;
}
double FuelMoment(double fuelGallons, double LBS_PER_GAL) {
    double distance;
    if (fuelGallons <= 60)
        distance = 314.6 * (fuelGallons);
    else if (fuelGallons <= 361)
        distance = 305.8 + (-0.01233 * (fuelGallons - 60));
    else if (fuelGallons <= 521)
        distance = 303.0 + (0.12500 * (fuelGallons - 361));
    else
        distance = 323.0 + (-0.04444 * (fuelGallons - 521));

    return (fuelGallons * LBS_PER_GAL) * distance;
}
double CalcTotalWt(int passengers, int crew, double baggage, double closet, double fuel,
    double PERSON_WT, double LBS_PER_GAL, double EMPTY_WEIGHT) {
    return EMPTY_WEIGHT + (passengers + crew) * PERSON_WT + baggage + closet + fuel * LBS_PER_GAL;
}
double CalcCenterOfGravity(int passengers, int crew, double baggage, double closet, double fuel,
    double PERSON_WT, double LBS_PER_GAL, double EMPTY_MOMENT, double totalWt) {
    double totalMoment = CrewMoment(crew, PERSON_WT)
        + PassengerMoment(passengers, PERSON_WT)
        + CargoMoment(baggage, closet)
        + FuelMoment(fuel, LBS_PER_GAL)
        + EMPTY_MOMENT;

    return totalMoment / totalWt;
}
void ShowResult(double totalWt, double centerOfGravity) {
    cout << fixed << setprecision(2);
    cout << "Total weight: " << totalWt << " lbs" << endl;
    cout << "Center of gravity: " << centerOfGravity << " " << endl;
}
int main() {
    const float PERSON_WT = 170;
    const float LBS_PER_GAL = 6.7;
    const float EMPTY_WEIGHT = 9887;
    const double EMPTY_MOMENT = 3185853.0;

    int crew, passengers;
    double closet, baggage, fuel;

    cout << "Enter crew, passengers, closet weight, baggage weight, and fuel (gallons): ";
    cin >> crew >> passengers >> closet >> baggage >> fuel;

    if (crew < 0 || passengers < 0 || closet < 0 || baggage < 0 || fuel < 0 || fuel > 565) {
        cout << "Error: Invalid input!" << endl;
        return 1;
    }
    double totalWt = CalcTotalWt(passengers, crew, baggage, closet, fuel, PERSON_WT, LBS_PER_GAL, EMPTY_WEIGHT);
    double centerOfGravity = CalcCenterOfGravity(passengers, crew, baggage, closet, fuel, PERSON_WT, LBS_PER_GAL, EMPTY_MOMENT, totalWt);
    ShowResult(totalWt, centerOfGravity);
    return 0;
}
