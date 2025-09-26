// Testing file
#include <iostream>
#include "Car.hpp"

using namespace std;

int main(void)
{
    // Create a car object
    Car honda_civic("Blaine", "Mobile", 1987, 4);
    honda_civic.print();

    Car toyota_corolla;
    toyota_corolla.setMake("Toyota");
    toyota_corolla.setModel("Corolla");
    toyota_corolla.setYear(2011);
    toyota_corolla.setMPG(10);
    toyota_corolla.print();

    return 0;
}