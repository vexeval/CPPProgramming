#include <iostream>
#include <string>
#include <random>
#include <thread>

using namespace std;
using std::cout;
using std::endl;

int main(void)
{
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<int> dist(0, 6); // range of 0 to 6

    string messages[7] {"Cat", "Money", "Race Track", "Dog", "Hammer", "Ball", "Closet"};

    int count = 0;
    while (count < 100)
    {
        // cout << "Those who know." << endl;
        cout << messages[dist(eng)] << endl;
        count++;
        // sleep 1 second
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    // Sentinel Loop
    // int sum = 0, i = 1;
    // while (i != 10)
    // {
    //     sum += i;
    //     i++;
    //     // cout << sum << endl;
    // }

    // int i = 1;
    // do
    // {
    //     int num = 1;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num << "G";
    //         num += 2;
    //     }

    //     cout << endl;
    //     i++;
    // } while (i <= 5);

    return 0;
}