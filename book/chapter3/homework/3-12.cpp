#include <iostream>

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
            cout << "Successfully\n";
    }

    void credit ( int number )
    {
        account += number;
    }

private:
    int account;
};

int main()
{
    Account a1(1000);

    while(1)
    {
        int flag;
        cout << "Welcome!\n";
        cout << "  1.getbalance\n";
        cout << "  2.debit\n";
        cout << "  3.credit\n";
        cin >> flag;

        switch( flag )
        {
        case 1:
            cout << "your balance is " << a1.getBalance() << endl;
            break;
        case 2:
            int debit;
            cout << "Please type number";
            cin >> debit;
            a1.debit( debit );

            break;
        case 3:
            int credit;
            cout << "Please type number\n";
            a1.credit( credit );
            break;
        default:
            cout << "error\n";
        }
    }
}
