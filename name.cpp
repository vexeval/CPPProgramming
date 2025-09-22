#include <iostream>
#include <random>
#include <string>

using namespace std;

void print_selection(string names[], int selected);

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
    cout << "**********" << endl;
    cout << names[selected] << endl;
    cout << "**********" << endl;
}