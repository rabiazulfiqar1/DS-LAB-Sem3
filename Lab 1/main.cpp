#include <bits/stdc++.h>
#include<iostream>

using namespace std;

string ltrim( const string& );
string rtrim( const string& );



int main()
{
    string n_temp;
    getline( cin, n_temp );

    int n = stoi( ltrim( rtrim( n_temp ) ) );

    string s = "";
    while (n > 0)
    {
        s = to_string( n % 2 ) + s;
        n /= 2;
    }

    string max1 = "";
    int maxLength = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            max1 = s[i];
            if (i < s.length())
            {
                i++;
                while (s[i] != '0' && i < s.length())
                {
                    max1 += s[i];
                    i++;
                }
            }
        }
        if (max1.length() > maxLength)
        {
            maxLength = max1.length();
        }
        max1.clear();
    }

    cout << maxLength;

    return 0;
}

string ltrim( const string& str ) {
    string s( str );

    s.erase(
        s.begin(),
        find_if( s.begin(), s.end(), not1( ptr_fun<int, int>( isspace ) ) )
    );

    return s;
}

string rtrim( const string& str ) {
    string s( str );

    s.erase(
        find_if( s.rbegin(), s.rend(), not1( ptr_fun<int, int>( isspace ) ) ).base(),
        s.end()
    );

    return s;
}
