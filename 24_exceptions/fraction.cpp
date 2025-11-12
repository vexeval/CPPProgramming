#include <iostream>

class Fraction
{
public:
    Fraction(int n=0, int d=1) : numer(n), denom(d) 
    {

    }

    int quotient(void)
    {
        if (denom == 0) { throw "Error: Cannot divide by zero."; }
        if (numer < -100) { std::string ex("Error: Number is too small"); throw ex;}
        if (numer < 0) { throw 777; }

        return numer / denom;
    }

private:
    int numer;
    int denom;
};

int main(void)
{
    int n1, n2;
    std::cout << "Enter two integers: ";
    std::cin >> n1 >> n2;
    Fraction f1(n1, n2);

    try
    {
        std::cout << f1.quotient() << std::endl;
    }
    catch (const char *str)
    {
        std::cout << str << std::endl;
    }
    catch (const std::string& str)
    {
        std::cout << str << std::endl;
    }
    catch (int i)
    {
        std::cout << i << std::endl;
    }
    catch (...) // catch anything
    {
        std::cout << "Unknown error" << std::endl;
    }

    std::cout << "Deleting root filesystem...\n";

    return 0;
}