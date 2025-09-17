#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int n;
    cin >> n;

    // n n-1 n-2 .... 1 2 3 .... n

    // Outer
    for (int j = 0; j < n; j++)
    {
        // Inner 1 (Count Down)
        for (int i = n; i > 0; i--)
        {
            cout << i << ' ';
        }

        // Inner 2 (Count Up)
        for (int i = 2; i <= n; i++)
        {
            cout << i << ' ';
        }
        cout << endl;

        /* Output for 5:
            5 4 3 2 1 2 3 4 5 
            5 4 3 2 1 2 3 4 5 
            5 4 3 2 1 2 3 4 5 
            5 4 3 2 1 2 3 4 5 
            5 4 3 2 1 2 3 4 5 
        */
    }

    

    return 0;
}