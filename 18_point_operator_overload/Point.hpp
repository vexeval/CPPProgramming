#ifndef POINT_H
#define POINT_H

#include <string>

class Point {
public:
    Point(int x = 0, int y = 0, char *tag = nullptr);

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

    std::string toString(void) const;
    
    
private:
    int x;
    int y;
    char *tag;

};

#endif