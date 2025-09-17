#include <iostream>
#include <string>

using namespace std;

void printCombinations(int n);
void printCombinations(string& s, int n, int i);
void reverse(const int list[], int newList[], int size);

int main(void)
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    printCombinations(n);
}

void printCombinations(int n)
{
    // Create a string and initialize with n 'a' characters
    string s(n, 'a');

    printCombinations(s, n, 0);
}

// CODE
void printCombinations(string& s, int n, int i)
{
    // base case
    if (i >= n) {
        cout << s << endl;
        return;
    }
    
    while (s[i] <= 'z') {
        printCombinations(s, n, i+1);
        s[i]++;
    }
    s[i] = 'a';
}

// newList is a reversal of the list
void reverse(const int list[], int newList[], int size)
{
    
}