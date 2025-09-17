#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef struct
{
    string title;
    string author;
    int duration;
} Lecture;

// or `struct Lecture`, if prefixed with `struct` when referenced

void printLecture(const Lecture& lecture);
Lecture createLecture(string title, string author, int duration);

int main(void)
{
    Lecture lec917;
    lec917.title = "Wicked awesome lecture";
    lec917.author = "Sun Tzu";
    lec917.duration = 10;

    Lecture mostAwesomeLecture = createLecture("The Art of War", "Sun Tzu", 2);
    printLecture(mostAwesomeLecture);

    printLecture(lec917);
}

void printLecture(const Lecture& lecture)
{
    cout << setw(15) << left << "Details for lecture " << lecture.title << endl;
    cout << setw(15) << left << "Title: " << lecture.title << endl;
    cout << setw(15) << left << "Author: " << lecture.author << endl;
    cout << setw(15) << left << "Duration: " << lecture.duration << endl;
}

Lecture createLecture(string title, string author, int duration)
{
    Lecture lec;
    lec.title = title;
    lec.author = author;
    lec.duration = duration;
    return lec;
}