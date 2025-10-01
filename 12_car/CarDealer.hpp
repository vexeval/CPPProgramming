#ifndef CARDEALER_H
#define CARDEALER_H

#include "Car.hpp"
#include <vector>

class CarDealer {
    private:
        std::vector<Car> inventory;
    
    public:
        void showInventory() const;
        void addCar(const Car& car); // adds car to inventory
        std::vector<Car> getInventory() const { return inventory; }

};

#endif