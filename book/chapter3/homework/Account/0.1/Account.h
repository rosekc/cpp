#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    Account ( int number )
    {
        setBalance ( number );
    }

    void setBalance ( int number )
    {
        if ( number <= 0 )
            cout << "error!!";
        else
            account = number;
    }

    int getBalance ()
    {
        return account;
    }

    void debit ( int number)
    {
        if ( account < number )
            cout << "error!";
        else
            account -= number;
    }

    void credit ( int number )
    {
        account += number;
    }

private:
    int account;
};
