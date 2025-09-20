#include <iostream>

using namespace std;

int evenCount(unsigned int value);

int main(void)
{
    int x;

    cout << "Enter the number ";
    cin >> x;
    cout << "The number of even digits is " << evenCount(x) << endl;

    return 0;
}

int evenCount(unsigned int value)
{
    if (value == 0) return 1;

    if (value < 10)
        return (value % 2 == 0) ? 1 : 0;
    
    int lastDigitEven = (value % 10) % 2 == 0 ? 1 : 0;
    return lastDigitEven + evenCount(value / 10);
}
