#include <iostream>
#include <string>

using namespace std;

void rotateLeft(const int src[], int dest[], int size, int k); // k: number of rotations

int main(void)
{
    const int SIZE = 7;

    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int newList[SIZE];

    rotateLeft(list, newList, SIZE, 1);

    // print the rotated array
    for (int i : newList) {
        cout << i << ' ';
    }

    return 0;
}

void rotateLeft(const int src[], int dest[], int size, int k) // k: number of rotations
{
    // 1) Calculate required rotation
    
}