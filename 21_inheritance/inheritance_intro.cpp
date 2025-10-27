#include <iostream>
#include <string>

class Human { // Base (Parent) class
public:
    std::string name;
    int age;
    Human(): name("John C++"), age(46) { }
    Human(std::string name, int age): name(name), age(age) { }

    void print(void) const {
        std::cout << "My name is " << name << '\n';
        std::cout << "I am " << age << '\n';
    }
};

class Student : public Human { // Student is a child of Human class
public:
    int student_id;

    // Initialize using both Parent and Child classes
    Student(std::string name = "John C++", int age = 1, int student_id = 0) : Human(name, age), student_id(student_id) {}

    void print(void) const {
        Human::print(); // Calling the method of the parent class
        std::cout << "My student ID is " << student_id << "\n";
    }
};

int main(void)
{
    Human h("Cell", 6);
    h.print();
    Student st("Christian Ramos", 19, 17344);
    st.print();
    
    return 0;
}