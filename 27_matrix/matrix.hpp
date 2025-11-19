#ifndef MATRIX_HPP
#define MATRIX_HPP

class Matrix
{
public:
    Matrix(int rows, int cols);              // Constructor
    ~Matrix();                               // Destructor
    Matrix(const Matrix& other);             // Copy Constructor
    Matrix& operator=(const Matrix& other);  // Assignment Operator

    void print() const;

private:
    int rows, cols;
    int **data;

};

#endif