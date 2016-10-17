#include <iostream>
using namespace std;

class Account
{
public:
    Account ( int number )
    {
        setAccount ( number );
    }

    void setAccount ( int number )
    {
        if ( number <= 0 )
            cout << "error!!\n";
        else
            number = account;
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

private:
    int account;
};
