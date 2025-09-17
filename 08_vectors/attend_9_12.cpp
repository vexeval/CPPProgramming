#include <iostream>
#include <cmath>
#include <vector>

void rotateLeft(std::vector<char>& v, int k);

int main(void) {
    std::vector<char> attend {'1', 'u', '3', '4', 'g', '6', 'r', 'j', 'y', 'j', 'd', 'd', 'f', 'h', 's', 'd', 'f', '5', 'a', 'd', 'h', '6', 'j', 's', 'd', 'f', 'j', '1', 's', 'v', 'a', '8', 'q', 'n', 'a', 'o', '9', 's', 'j', 'd', 'f'};
    int n_rotations = pow((50 * 2 - 75 / 3 + 20 % 7 + 20 + 12 / 4), 3);
    rotateLeft(attend, n_rotations);

    for(int i = 0; i < 5; i++) {
        std::cout << attend.at(i);
    }
    std::cout << '\n';

    return 0;
}

void rotateLeft(std::vector<char>& v, int k)
{
    int n = v.size();
    k = k % n; // Handle cases where k >= n

    std::vector<char> temp(v.begin(), v.begin() + k); // Store first k elements

    for(int i = 0; i < n - k; i++) {
        v[i] = v[i + k]; // Shift elements to the left
    }

    for(int i = 0; i < k; i++) {
        v[n - k + i] = temp[i]; // Place stored elements at the end
    }

}