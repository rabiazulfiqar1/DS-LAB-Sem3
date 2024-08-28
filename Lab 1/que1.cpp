#include<iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount()
    {
        balance = 0.0;
        cout << "Balance: " << balance << endl;
    }
    BankAccount( float bal )
    {
        balance = bal;
        cout << "Balance: " << balance << endl;
    }
    BankAccount( BankAccount& acc )
    {
        balance = acc.balance - 200;
        cout << "Balance: " << balance << endl;
        cout << "Balance: " << acc.balance << endl;
    }
    void PrintBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account1;
    BankAccount account2( 1000 );
    BankAccount account3 = account2;
}