#include <iostream>
#include <vector>
#include <string>

using namespace std;

// sets the pointed value to a given number
void setDeepValue(int ***p, int value);

int main(void)
{
    int x = 0;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;
    setDeepValue(p3, 42);
    cout << x << endl;
}

void setDeepValue(int ***p, int value)
{
    ***p = value;
}