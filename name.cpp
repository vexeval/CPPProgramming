#include <iostream>
#include <random>
#include <string>

using namespace std;

void print_selection(string names[], int selected);
void printBarOfLength(int length, char barChar);

int main(void)
{
    srand(time(0));

    const int SIZE = 5;
    string names[SIZE] = {"Will Blaine", "Andrew Vargas", "Christian Ramos", "Jordan Dexter", "Dr. Gregory House"};

    int selected = rand() % SIZE;

    print_selection(names, selected);

    return 0;
}


void print_selection(string names[], int selected)
{
    printBarOfLength(names[selected].size(), '*');
    cout << names[selected] << endl;
    printBarOfLength(names[selected].size(), '*');
}

// Prints a quantity (length) of a character (barChar), line breaking at the end.
void printBarOfLength(int length, char barChar)
{
    for (int i = 0; i < length; i++) {
        cout << barChar;
    }
    cout << endl;
}