#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::endl;
using std::cin;

int main(void)
{
    int age = 25;
    double gpa = 3.5;
    char grade = 'A';
    string name = "Mike"; // string (requires <string> header)
    bool isActive = true;

    // getline(cin, name);

    cout << "Enter your name age GPA and grade:" << endl;
    cin >> name >> age >> gpa >> grade;

    cout << "Stats:" << endl;
    cout << name << endl;
    cout << age << endl;
    cout << gpa << endl;
    cout << grade << endl;

    return 0;
}