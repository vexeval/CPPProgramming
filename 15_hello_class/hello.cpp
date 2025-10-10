#include <iostream>

class Hello {
    public:
        Hello() {
            std::cout << "Constructor." << std::endl;
        }
        Hello(int n) {
            std::cout << "Constructor with arguments." << std::endl;
        }

        void Bye() {
            std::cout << "Bye bye." << std::endl;
        }

};

int main(void) {

    // Create an object dynamically
    Hello *hi = new Hello;
    Hello *hi2 = new Hello(10);

    // Access bye method
    hi->Bye();

    // deallocate the memory
    delete hi;
    delete hi2;

    return 0;
}