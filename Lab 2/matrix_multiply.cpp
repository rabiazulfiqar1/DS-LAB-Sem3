#include "matrix_multiply.h"
#include<iostream>

using namespace std;
using namespace N;

int** matrix_multiply::MultiplyMatrix( int** matrix1, int** matrix2, int row1, int row2, int col1, int col2 )
{
    if (col1 == row2)
    {
        int** multipliedMatrix = new int* [row1];
        for (int i = 0; i < row1; i++)
        {
            multipliedMatrix[i] = new int[col2];

            for (int j = 0; j < col2; j++)
            {
                multipliedMatrix[i][j] = 0;
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    multipliedMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        return multipliedMatrix;
    }
    else
    {
        cout<<"Matrices can't be multiplied"<<endl;
        return nullptr;
    }
}

void matrix_multiply::InputMatrix( int** m, int row, int col )
{
    cout<<"----MATRIX INPUT-----"<<endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Enter vals for row " << i + 1 << ": " << endl;
        for (int j = 0; j < col; j++)
        {
            cin >> m[i][j];
        }
    }
}

void matrix_multiply::PrintMatrix( int** resultant, int row, int col )
{
    cout << "Resultant multiplied matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << resultant[i][j] << " ";
        }
        cout << endl;
    }
}

void AllocateMatrix(int** &matrix, int row, int col)
{
    matrix = new int* [row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }
}

void DeallocateMatrix( int** matrix, int row ) {
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix; 
}

int main()
{
    matrix_multiply mm;

    int row1 = 3;
    int col1 = 3;
    int**m1;

    AllocateMatrix(m1, row1, col1);

    int row2 = 3;
    int col2 = 3;
    int** m2; 

    AllocateMatrix( m2, row2, col2 );

    mm.InputMatrix(m1, row1, col1);
    mm.InputMatrix(m2, row2, col2);

    int** multipliedMatrix = mm.MultiplyMatrix( m1, m2, row1, row2, col1, col2);

    mm.PrintMatrix(multipliedMatrix, row1, col2);

    DeallocateMatrix( m1, row1 );        
    DeallocateMatrix( m2, row2 );
    DeallocateMatrix( multipliedMatrix, row1 );
}