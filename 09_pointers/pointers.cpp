#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap3(int* p1, int* p2);

int main(void)
{
    int x;

    float *fp = nullptr;
    int * const ptr = &x;
    const int *const ptr = &x; // constant pointer that points to a constant integer

    int a = 4;
    int* aPtr = &a;

    cout << *aPtr << endl;
    

    return 0;
}

// Pass two pointers by value
void swap3(int* p1, int* p2)
{
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
}

void convertToUppercase(char *sPtr)
{
    while (*sPtr != '\0') {
        *sPtr = toupper(*sPtr);
        ++sPtr;
    }
}

int* reverse(int* list, int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        // Swap list[i] with list[j]
        int t = list[j];
        list[j] = list[i];
        list[i] = t;
    }

    return list;
}

void f(int* p1, int* &p2); // by value, by reference

