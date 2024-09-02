#include<iostream>
using namespace std;

int main()
{
    string** attendees = new string * [4];
    int seatingCapacity[4] = { 3, 4, 2, 1 };

    for (int i = 0; i < 4; i++)
    {
        attendees[i] = new string[seatingCapacity[i]];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter vals for dept "<<i+1<<": " << endl;
        for (int j = 0; j < seatingCapacity[i]; j++)
        {
            cin >> attendees[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "Names of attandees' sitting in " << i + 1 << " row: " << endl;
        for (int j = 0; j < seatingCapacity[i]; j++)
        {
            cout << attendees[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        delete[] attendees[i];
    }
    delete[] attendees;
}