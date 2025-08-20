#include <iostream>

// Create the most epic namespace ever conceived
namespace WBE_Internal {
    void print() {
        std::cout << "Evil time." << std::endl;
    }
}

namespace WBE_External {
    void print() {
        std::cout << "It's high time I ex-blaine this to you." << std::endl;
    }
}

int main(void)
{
    WBE_Internal::print();
    WBE_External::print();

    return 0;
}