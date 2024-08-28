#include<iostream>
using namespace std;

bool AreFriends( int people1, int people2, int sizeOfArr, bool arr[][5] )
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (arr[people1][i] == 1 && arr[people2][i] == 1)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    bool arr2d[5][5] = {
        {0,1,0,1,1},
        {1,0,1,0,1},
        {0,1,0,0,0},
        {1,0,0,0,1},
        {1,1,0,1,0}
    };

    bool ans = AreFriends( 4, 2, 5, arr2d );

    cout << "Ans: " << ans << endl;
}