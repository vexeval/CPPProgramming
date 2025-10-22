#include "Point.hpp"

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

bool Point::operator==(const Point& other) const
{
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const
{
    return !(*this == other);
}

int& Point::operator[](int index)
{
    return (index == 0) ? x : y;
}

Point Point::operator+(const Point& other) const
{
    return Point(x + other.x, y + other.y);
}

// TODO FINISH

Point& Point::operator+=(const Point& other)
{
    return Point(this + other);
}

Point& Point::operator*=(const Point& other)
{

}