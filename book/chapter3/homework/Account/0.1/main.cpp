#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    cout << "Test fot Account.h";
    Account a1 ( 12345 );
    Account a2 ( 66666 );


    cout << a1.getBalance();
    cout << a2.getBalance();

    cout << "debit test";

    a1.debit (100);

    cout << a1.getBalance();

    cout << "credit test";

    a1.credit (100);
    cout << a1.getBalance ();
}
