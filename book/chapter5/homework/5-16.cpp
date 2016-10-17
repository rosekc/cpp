#include <iostream>
using namespace std;

int main()
{
    int amount = 100000;
    double rate = 1.05;
    int a1, a2;

    cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;

    for ( int year = 1; year <= 10; year++ )
    {
        amount *=  rate ;

        a1 = amount / 100;
        a2 = amount % 100;
        cout << setw( 4 ) << year << setw( 21 ) << a1 << ".";

        if ( a2 < 10 )
        {
           cout << "0" << a2 << endl;
        }
        else
        {
           cout << a2 << endl;
        }
    }

}
