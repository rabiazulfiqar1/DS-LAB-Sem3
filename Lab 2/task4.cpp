#include<iostream>
using namespace std;

int main()
{
    //IMPLEMENTING JAGGED ARRAY
    float** gpa = new float* [4];
    int courses[4] = { 3, 4, 2, 1 };

    int deptSize = 4;

    for (int i = 0; i < deptSize; i++)
    {
        gpa[i] = new float[courses[i]];
    }

    for (int i = 0; i < deptSize; i++)
    {
        cout << "Enter gpa of each course for dept " << i + 1 << ": " << endl;
        for (int j = 0; j < courses[i]; j++)
        {
            cin >> gpa[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            cout << "SE dept: " << endl;
            break;
        case 1:
            cout << "AI deppt: " << endl;
            break;
        case 2:
            cout << "CS dept: " << endl;
            break;
        case 3:
            cout << "DS dept: " << endl;
            break;
        }
        for (int j = 0; j < courses[i]; j++)
        {
            cout << gpa[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        delete[] gpa[i];
    }
    delete[] gpa;
}