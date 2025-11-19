#include "matrix.hpp"
#include <iostream>
#include <stdexcept>

Matrix::Matrix(int rows, int cols)
{
    if (rows < 1 || cols < 1)
    {
        this->rows = 0;
        this->cols = 0;
        throw std::logic_error("Rows and cols should be positive!"); // exception
    }

    this->rows = rows;
    this->cols = cols;

    data = new int*[this->rows]; // array of pointers to int
    for (int i = 0; i < this->rows; i++)
    {
        data[i] = new int[this->cols];
    }
    
    // Initialize the values with 0's
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            data[i][j] = 0;
        }
    }
}
Matrix::~Matrix()
{

}
Matrix::Matrix(const Matrix& other)
{

}
Matrix& Matrix::operator=(const Matrix& other)
{

}