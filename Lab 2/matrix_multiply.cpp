#include "matrix_multiply.h"
#include<iostream>

using namespace std;
using namespace N;

int** matrix_multiply::MultiplyMatrix( int** matrix1, int** matrix2, int size )
{
    int** multipliedMatrix = new int* [size];
    for (int i = 0; i < size; i++)
    {
        multipliedMatrix[i] = new int[size];

        for (int j=0; j<size; j++)
        {
            multipliedMatrix[i][j] = 0;
        }
    }
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            for (int k=0; k<size; k++)
            {
                multipliedMatrix[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    return multipliedMatrix;
}

void InputMatrix(int** m, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter vals for row " << i + 1 << ": " << endl;
        for (int j = 0; j < size; j++)
        {
            cin >> m[i][j];
        }
    }
}

void PrintMatrix(int** resultant, int size)
{
    cout << "Resultant multiplied matrix: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << resultant[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    matrix_multiply mm;
    int size = 4;
    int** m1 = new int* [size];
    for (int i = 0; i < size; i++)
    {
        m1[i] = new int[size];
    }

    int** m2 = new int* [size];
    for (int i = 0; i < size; i++)
    {
        m2[i] = new int[size];
    }

    InputMatrix(m1, size);
    InputMatrix(m2, size);

    int** multipliedMatrix = mm.MultiplyMatrix( m1, m2, size );

    PrintMatrix(multipliedMatrix, size);
}