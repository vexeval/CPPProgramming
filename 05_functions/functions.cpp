#include <iostream>
#include <string>
#include <cctype> // functions like to_upper, similar to ctype.h
#include <cmath>
#include <list>

using namespace std;
using std::cout;
using std::endl;

// Function Headers
void Print(string message);
void Swap(int &a, int &b);
void Title(string &s);

typedef struct VectorQ
{
    double x;
    double y;
} Vector2;
Vector2 Quadratic(double a, double b, double c);

int main(void)
{
    string s1 = "hello";
    Title(s1);
    cout << s1 << endl;

    Print("Yo\n");
    int a = 4;
    int b = 6;
    // Print("Before Swap: a: " + to_string(a) + ", b: " + to_string(b) + "\n");
    // Swap(a,b);
    // Print("After Swap: a: " + to_string(a) + ", b: " + to_string(b) + "\n");

    float x = 4.0*3.0/4.0;
    float y = 9.0/16.0;
    float z = sqrt(7);
    // Vector2 result = Quadratic(x, y, z);
    cout << "Values a=" << x << ", b=" << y << ", c=" << z << endl;
    // Print("Result +x: " + to_string(result.x) + "\n");
    // Print("Result -x: " + to_string(result.y) + "\n");

    return 0;
}

void Print(string message)
{
    cout << message;
}

void Swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void Title(string &s)
{
    s[0] = toupper(s[0]);
}

Vector2 Quadratic(double a, double b, double c)
{
    Vector2 values = {(-b + sqrt(b*b - 4*a*c) / 2*a), (-b - sqrt(b*b - 4*a*c) / 2*a)};
    return values;
}