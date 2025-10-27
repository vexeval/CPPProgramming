#ifndef POINT_H
#define POINT_H

#include <string>
#include <ostream>

class Point {
public:
    Point(int x = 0, int y = 0, const char *tag = nullptr);

    // Destructor
    ~Point();

    // Copy constructor
    Point(const Point& other);

    // Logic operators
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    // Arithemetic operator
    Point operator+(const Point& other) const;
    
    // Arithmetic assignment operator
    Point& operator+=(const Point& other);

    Point operator*(const Point& other) const;

    Point& operator*=(const Point& other);

    // Subscript operator
    int& operator[](int index);
    
    // Unary operator
    Point operator-();

    // Increment
    Point operator++(); // Pre
    Point operator++(int ); // Post

    // TODO decrement
    Point operator--();
    Point operator--(int );

    // Assignment operator
    void operator=(const Point& other);

    std::string toString(void) const;

    // Friend function
    friend int sum_coordinates();

    friend std::ostream& operator<<(std::ostream& out, Point& point);
    friend std::ostream& operator>>(std::ostream& in, Point& point);
    
private:
    int x;
    int y;
    char *tag;
};

// Extraction operator
// std::ostream& operator<<(std::ostream& out, Point& point);

#endif