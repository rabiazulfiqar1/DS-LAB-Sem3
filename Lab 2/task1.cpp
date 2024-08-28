#include<iostream>
using namespace std;

int main()
{
    int** arr = new int* [5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}