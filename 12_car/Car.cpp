// The implementation of a Car class
#include <iostream>
#include <string>
#include "Car.hpp"

using namespace std;

Car::Car() {
    setMake("Unknown");
    setModel("Unknown");
    setYear(1900);
    setMPG(0.0);
}

Car::Car(string make, string model, int year, double MPG) {
    setMake(make);
    setModel(model);
    setYear(year);
    setMPG(MPG);
}

// Setters
void Car::setMake(string newMake) {
    if (!newMake.empty()) {
        make = newMake;
    }
}
void Car::setModel(string newModel) {
    if (!newModel.empty()) {
        model = newModel;
    }
}
void Car::setYear(int newYear) {
    year = (newYear >= 1900 && newYear <= 2025) ? newYear : 1900;
}
void Car::setMPG(double newMPG) {
    MPG = (newMPG > 0) ? newMPG : 0;
}

// Getters
string Car::getMake() const { return make; }
string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getMPG() const { return MPG; }

// Print
void Car::print(void) const {
    cout << getMake() << endl;
    cout << getModel() << endl;
    cout << getYear() << endl;
    cout << getMPG() << endl;
}