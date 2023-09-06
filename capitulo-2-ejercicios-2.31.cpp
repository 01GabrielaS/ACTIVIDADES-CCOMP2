#include <iostream>
using namespace std;

int main() {
    float totalmiles;
    float costPerGallon;
    float averageMilesPerGallon;
    float parkingFeesPerDay;
    float tollsPerDay;

    cout << "A)Total mikes driven per day: ";
    cin >> totalmiles;

    cout << "B)Cost per gallon of gasoline: ";
    cin >> costPerGallon;

    cout << "C)Average miles per gallon: ";
    cin >> averageMilesPerGallon;

    cout << "D)Parking fees per day: ";
    cin >> parkingFeesPerDay;

    cout << "E)Tolls per day: ";
    cin >> tollsPerDay;

    float dailyCost = (totalmiles / averageMilesPerGallon) * costPerGallon + tollsPerDay+ parkingFeesPerDay;

    cout << "Your daily driving cost is: " << dailyCost << endl;

    return 0;
}