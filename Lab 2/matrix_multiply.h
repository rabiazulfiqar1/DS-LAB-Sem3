#ifndef MATRIX_MULTIPLY_H
#define MATRIX_MULTIPLY_H

namespace N
{
    class matrix_multiply
    {
    public:
        int** MultiplyMatrix( int** matrix1, int** matrix2, int row1, int row2, int col1, int col2 );
        void InputMatrix( int** m, int row, int col );
        void PrintMatrix( int** resultant, int row, int col );
    };
}

#endif