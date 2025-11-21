#include "matrix.hpp"
#include "SquareMatrix.hpp"
#include "SquareMatrix.cpp"
#include "matrix.cpp"

int main(void)
{
    Matrix<std::string> m;

    m = m.load("data.txt");
    m.print();

    // TODO Finish
    SquareMatrix<double> sm; 
    sm = sm.load("data2.txt");
    sm.print();

    return 0;
}