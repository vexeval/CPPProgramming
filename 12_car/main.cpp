// Testing file
#include <iostream>
#include "Car.hpp"
#include "CarDealer.hpp"
using namespace std;

// Returns true if the given car is efficient
bool isEfficient(const Car& car);
int numberofInefficientCars(const CarDealer& dealer);

int main(void)
{
    // Create a car object
    Car honda_civic("Blaine", "Mobile", 1987, 10);
    // honda_civic.print();

    Car toyota_corolla;
    toyota_corolla.setMake("Toyota");
    toyota_corolla.setModel("Corolla");
    toyota_corolla.setYear(2011);
    toyota_corolla.setMPG(40);
    // toyota_corolla.print();

    cout << '\n' << (isEfficient(toyota_corolla) ? "Efficient" : "Inefficient") << "\n\n";
    cout << '\n' << (isEfficient(honda_civic) ? "Efficient" : "Inefficient") << "\n\n";

    // Create a CarDealer object
    CarDealer toyotaDealer;
    toyotaDealer.addCar(honda_civic);
    toyotaDealer.addCar(toyota_corolla);

    toyotaDealer.showInventory();

    cout << '\n' << numberofInefficientCars(toyotaDealer) << '\n';

    return 0;
}

bool isEfficient(const Car& car)
{
    return (car.getMPG() > 20.0) ? true : false;
}

int numberofInefficientCars(const CarDealer& dealer)
{
    int n_cars;
    for (Car& c : dealer.getInventory())
    {
        if (!isEfficient(c)) n_cars++;
    }
    return n_cars;
}