#include<iostream>
using namespace std;

bool AreFriends( int people1, int people2, int sizeOfArr, bool arr[][5] )
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (arr[people1][i] == true && arr[people2][i] == true)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // Initializing the friendship array as per the problem statement
    bool arr2d[5][5] = {
        {true, true, false, true, true},
        {true, true, true, false, false},
        {false, true, true, false, false},
        {true, false, false, true, true},
        {true, false, false, true, true}
    };

    bool ans = AreFriends( 0, 4, 5, arr2d );

    cout << "Do person 0 and person 4 have a common friend? " << (ans ? "Yes" : "No") << endl;
}