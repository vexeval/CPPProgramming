#include <iostream>
#include "Point.hpp"

int main(void)
{
    Point p1(3, 4);
    Point p2(5, 4);
    Point p3(85, 84);

    // Test ==
    std::cout << (p1 == p2) << std::endl;

    if (p1 != p2) {
        std::cout << (char) p3[0];
    }
    else
    {
        std::cout << (char) p3[1];
    }

    p1[0] = 57;
    std::cout << (char) p1[0];
    
    p1[0] = p1[0] - 49;
    p2[0] = p2[0] + 4;
    Point p4 = p1 * p2;
    std::cout << (char) (p4[0] + 8);

    Point p5(60, 111);
    p5 += p1;
    std::cout << (char) (p5[1] - 26);

    p5 *= p1;
    for (int i = 0; i < 185; i++) {
        p5[1] -= 2;
    }

    std::cout << (char) p5[1];

    return 0;
}