#include <iostream>
#include <random>
#include <string>

using namespace std;

int getRand(uniform_int_distribution<int>& dist, mt19937& eng);

int main(void) {
    // Generating the seed
    int seed;
    std::cout << "Enter the seed ";
    std::cin >> seed;
    
    // Initialize a random number engine with a seed
    std::mt19937 eng(seed);

    // Define a distribution
    std::uniform_int_distribution<int> dist(1, 6);

    while (true)
    {
        // Roll dice
        int roll1 = getRand(dist, eng);
        int roll2 = getRand(dist, eng);
        int sum = roll1+roll2;

        // Reveal results
        cout << "You rolled " << roll1 << " + " << roll2 << " = " << sum << endl;

        int point; // initialize point

        // Check game condition
        if (point == 0) { // Come-out phase
            if (sum == 7 || sum == 11) {
                // Natural
                cout << "You win" << endl;
                break;
            } else if (sum == 2 || sum == 3 || sum == 12) {
                // Craps
                cout << "You lose" << endl;
                break;
            } else {
                // Set point and move to point phase
                point = sum;
                cout << "point is " << point << endl;
            }
        } else { // Point phase
            if (sum == point) {
                // Rolled the point again before rolling a 7
                cout << "You win" << endl;
                break;
            } else if (sum == 7) {
                // Rolled a 7 before making the point
                cout << "You lose" << endl;
                break;
            }
        }

        // Loop back
    }
    
    return 0;
}

int getRand(uniform_int_distribution<int>& dist, mt19937& eng)
{
    return dist(eng);
}