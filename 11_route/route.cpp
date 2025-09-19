#include <iostream>
#include <ctime>
#include <string>

using namespace std;

typedef struct {
private:
    string _source = "none";
    string _destination = "none";
    int _length;

    void _updateLength(void) {
        _length = (_source.empty() || _destination.empty()) ? 0 : rand() % 900 + 75;
    }

public:
    string getSource(void) {
        return _source;
    }
    string getDestination(void) {
        return _destination;
    }

    void print(void) {
        cout << "=>>= Route information =>>=" << endl;
        cout << _source << " -> " << _destination << endl;
        cout << "Length: " << _length << endl;
        cout << "=><=" << endl;
    }
    
    void setSource(string new_source) {
        _source = new_source;
        _updateLength();
    }
    void setDestination(string new_destination) {
        _destination = new_destination;
        _updateLength();
    }

} Route;

int main(void)
{
    srand(time(0));
    // Create an object of Route
    Route lunch_trip;
    lunch_trip.setSource("Florida Polytechnic University");
    lunch_trip.setDestination("Will Blaine Institute of Technology (WBIT)");

    lunch_trip.setDestination("Jonas' Blacksmith Shop");

    lunch_trip.print();
    
    return 0;
}

class Car
{
    public:
        void start();
        void setCylinderCount(int newCylinderCount) { _cylinderCount = newCylinderCount; }
    private:
        int _cylinderCount;
};