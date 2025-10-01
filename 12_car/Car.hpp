// Header file (.hpp, .h)
// Description of the class

/*
    TODO:
    Add:
        mileage: the odometer of the car
        fuel_capacity: tank capacity of car 
        fuel_level: current fuel in gallons

        Methods:
            void refuel(double gallons);
            void drive(double distance); if car has enough fuel to drive the given distance, print <Car (make, model) is driving!>
*/

#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car {
    public:
        // Constructors
        Car(); // no-arg
        Car(string make, string model, int year, double MPG);

        // Getters
        // Constant methods - cannot modify class properties
        string getMake() const;
        string getModel() const;
        int getYear() const;
        double getMPG() const;

        // Setters
        void setMake(string newMake);
        void setModel(string newModel);
        void setYear(int newYear);
        void setMPG(double newMPG);

        // Methods
        void print(void) const;

    private:
        string make;
        string model;
        int year;
        double MPG;

};

#endif