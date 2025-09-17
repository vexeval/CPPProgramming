#include <iostream>
#include <random>
using namespace std;
using std::cout;
using std::endl;

int main(void)
{
    // Generating the seed
    std::random_device rd;

    // Initialize a random number engine with a seed
    std::mt19937 eng(rd());

    // Define a distribution
    std::uniform_int_distribution<int> dist(1, 100); // range of 1 to 100

    int sum = 0;

    for (int i = 0; i < 50; i++) { // 50 random numbers from 1 to 100
        int num = dist(eng);
        cout << num << endl;
        sum += num;
    }

    cout << "Sum: " << sum << endl;
    cout << "Avg: " << sum / 50.0 << endl;

    return 0;
}

// int main(void)
// {
//     // 1. Generate two random single-digit integers
//     srand(time(0));
//     int number1 = rand() % 10;
//     int number2 = rand() % 10;

//     cout << ((number1 < number2)) << endl;
//     return 0;
// }