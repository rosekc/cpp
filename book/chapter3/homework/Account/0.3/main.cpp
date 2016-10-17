#include <iostream>
#include "Account.h"

using namespace std;

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
