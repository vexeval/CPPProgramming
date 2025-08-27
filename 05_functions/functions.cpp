#include <iostream>
#include <string>
#include <cctype> // functions like to_upper, similar to ctype.h

using namespace std;
using std::cout;
using std::endl;

// Function Headers
void Print(string message);
void Swap(int &a, int &b);
void title(string &s);

int main(void)
{
    string s1 = "hello";
    title(s1);
    cout << s1 << endl;

    Print("Yo\n");
    int a = 4;
    int b = 6;
    Print("Before Swap: a: " + to_string(a) + ", b: " + to_string(b) + "\n");
    Swap(a,b);
    Print("After Swap: a: " + to_string(a) + ", b: " + to_string(b) + "\n");

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

void title(string &s)
{
    s[0] = toupper(s[0]);
}