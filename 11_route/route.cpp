#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Route {
private:
    string _source = "none";
    string _destination = "none";
    int _length;

    void _updateLength(void) {
        _length = (_source.empty() || _destination.empty()) ? 0 : rand() % 900 + 75;
    }

public:
    //  Constructors
    //      Have no return type
    //      Are called when the object is created
    //      Should be public
    //      Cannot be called explicitely

    // No-Argument constructor (First version)
    // Route() {
    //     _length = 0;
    // }

    // No-Argument constructor (Second version)
    Route() : _length(0) {
        _length = 0;
    }

    // Overloaded constructor
    Route(string source_, string destination_) {
        setSource(source_);
        setDestination(destination_);
    }

    string getSource(void) {
        return _source;
    }
    string getDestination(void) {
        return _destination;
    }
    int getLength(void) {
        return _length;
    }

    void print(void) {
        cout << "=>>= Route information =>>=" << endl;
        cout << _source << " -> " << _destination << endl;
        cout << "Length: " << _length << endl;
    }

    // Returns whether the route is long or not
    bool isLong();
    
    void setSource(string new_source) {
        _source = new_source;
        _updateLength();
    }
    void setDestination(string new_destination) {
        _destination = new_destination;
        _updateLength();
    }

};

int main(void)
{
    srand(time(0));
    // Create an object of Route
    Route lunch_trip;
    lunch_trip.setSource("Florida Polytechnic University");
    lunch_trip.setDestination("Will Blaine Institute of Technology (WBIT)");

    lunch_trip.setDestination("Jonas' Blacksmith Shop");

    lunch_trip.print();

    // Create a Route object with constructor with arguments
    Route christmas_trip("2fort", "gm_construct");
    christmas_trip.print();

    // Creating objects
    Route route1; // no-argument constructor
    Route route2("A", "B"); // constructor with arguments
    Route route3 = Route(); // no-argument constructor
    Route route4 = Route("C", "D"); // constructor with arguments

    // Route route5(); // HECK NAH YOU TWEAKIN FR, NOT AN OBJECT, ITS A FUNCTION PROTOTYPE. GET HANK AND CONNOR IN HERE. PAIGE FOREMAN

    cout << route4.isLong() << endl;
    
    return 0;
}

// Designates that this is not just a function, but actually a method of the route class
bool Route::isLong() {
    return getLength() > 300;
}
