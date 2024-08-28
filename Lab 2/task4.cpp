#include<iostream>
using namespace std;

int main()
{
    //IMPLEMENTING JAGGED ARRAY
    float** departments = new float* [4];
    int size[4] = { 3, 4, 2, 1 };

    for (int i = 0; i < 4; i++)
    {
        departments[i] = new float[size[i]];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter vals for dept 1: " << endl;
        for (int j = 0; j < size[i]; j++)
        {
            cin >> departments[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            cout << "SE dept: " << endl;
        case 1:
            cout << "AI deppt: " << endl;
        case 2:
            cout << "CS dept: " << endl;
        case 4:
            cout << "DS dept: " << endl;
        }
        for (int j = 0; j < size[i]; j++)
        {
            cout << departments[i][j] << " ";
        }
        cout << endl;
    }
}