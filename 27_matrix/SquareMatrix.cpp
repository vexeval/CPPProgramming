#include "SquareMatrix.hpp"

template <typename T>
SquareMatrix<T>::SquareMatrix(int n) : Matrix<T>(n, n) {} // call base class constructor

template <typename T>
SquareMatrix<T> SquareMatrix<T>::load(const char *filename)
{
    
}

template <typename T>
SquareMatrix<T> SquareMatrix<T>::operator=(const SquareMatrix<T>& m)
{
    if (this->data)
    {
        for (int i = 0; i < this->rows; i++)
        {
            delete [] this->data[i];
        }
        delete [] this->data;
    }

    this->rows = other.rows;
    this->cols = other.cols;

    // Memory Allocation
    data = new T*[this->rows]; // array of pointers to int
    for (int i = 0; i < this->rows; i++)
    {
        this->data[i] = new T[this->cols];
    }

    // Initialize the values
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            this->data[i][j] = this->other.data[i][j];
        }
    }

    return *this;
}