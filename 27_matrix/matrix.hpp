#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T>
class Matrix
{
public:
    Matrix(int rows=1, int cols=1);             // Constructor
    virtual ~Matrix();                          // Destructor
    Matrix(const Matrix<T>& other);             // Copy Constructor
    Matrix& operator=(const Matrix<T>& other);  // Assignment Operator

    void print() const;
    Matrix<T> load(const char *filename);

protected:
    int rows, cols;
    T **data;

};

#endif