#include <iostream>
using namespace std;

const float EMPTY_WEIGHT = 9887.0;
const float EMPTY_MOMENT = 3185853.0;
const float LBS_PER_GAL = 6.7;
const float PERSON_WT = 170.0;

double FPassengerMoment(double passengers) {
    double PassengerMoment = 0;
    if (passengers <= 2) {
        PassengerMoment = passengers * 265;
    }
    else {
        PassengerMoment += 265 *2;
        if (passengers <= 4)
            PassengerMoment += (passengers - 2) * 219;
        else {
            PassengerMoment += 219 * 4;
            if (passengers <= 6)
                PassengerMoment += (passengers - 4) * 295;
            else {
                PassengerMoment += 295 * 4;
                if (passengers <= 8)
                    PassengerMoment += (passengers - 6) * 341;
            }
        }
    }
    return PassengerMoment * PERSON_WT;
}

double FCargoMoment(double baggage, double closet) {
    return baggage * 386 + closet * 182;
}

double FCrewMoment(double crew) {
    return crew * 143 * PERSON_WT;
}

double FFuelMoment(double fuel) {
    double D, D1, D2, D3, All;
    D = 314.6;
    D1 = 305.8 + (-0.01233 * (G - 60));
    D2 = 303.0 + 0.12500 * (fuel - 361);
    D3 = 323.0 - 0.04444 * (fuel - 521);
    if (fuel < 60) {
        All = D * fuel;
    }
    else {
        All = D * 59;
        if (fuel < 360) {
            All += (fuel - 59) * D;
        }
        else{
            All += 300 * D1;
            if (fuel < 520) {
                All += (fuel-360) * D2;
            }
            else {
                All += 160 * D2;
                All += (fuel - 520) * D3;
            }
        }
    }
    return fuel * All;
}

double CalcTotalWt(double passengers, double crew, double baggage, double closet, double fuel) {
    return EMPTY_WEIGHT + (passengers + crew) * PERSON_WT + baggage + closet + fuel * LBS_PER_GAL;
}

double CalcCenterOfGravity(double passengers, double crew, double baggage, double closet, double fuel, double TotalWt) {
    double CrewMoment = FCrewMoment(crew);
    double PassengerMoment = FPassengerMoment(passengers);
    double CargoMoment = FCargoMoment(baggage, closet);
    double FuelMoment = FFuelMoment(fuel);

    double CenterOfGravity = (CrewMoment + PassengerMoment + CargoMoment + FuelMoment + EMPTY_MOMENT) / TotalWt;
    return CenterOfGravity;
}

int main() {
    double passengers, crew, baggage, closet, fuel;

    cout << "Enter number of crew, passengers, closet weight, baggage weight, and fuel (gallons): ";
    cin >> crew >> passengers >> closet >> baggage >> fuel;

    if (passengers < 0 || crew < 0 || baggage < 0 || closet < 0 || fuel < 0 || fuel > 565 ) {
        cout << "Error: negative input!" << endl;
        return 1;
    }

    double TotalWt = CalcTotalWt(passengers, crew, baggage, closet, fuel);
    double CenterOfGravity = CalcCenterOfGravity(passengers, crew, baggage, closet, fuel, TotalWt);

    cout << "Total aircraft weight = " << TotalWt << " lbs" << endl;
    cout << "Center of Gravity = " << CenterOfGravity << endl;

    return 0;
}
