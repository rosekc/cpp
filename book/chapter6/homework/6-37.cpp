#include <iostream>
using namespace std;

long long fibonacci (int);

int main()
{
    int n;

    cout << "Please enter a number: ";
    cin >> n;

    cout << "Fibonacci(" << n << ")=" << fibonacci( n ) << endl;

    while( fibonacci( n ) <= 2147483647 )
    {
        n++;
    }
    cout << "The biggest fibonacci number we can get in long long int: " << fibonacci( n - 1 ) << endl
        << "It is No." << ( n - 1 ) << " fibonacci number!" << endl;
}

long long fibonacci( int n )
{
    long long a, b, r;
    if( n == 1 )
    {
        return 0;
    }
    else if( n == 2 )
    {
        return 1;
    }
    else if( n > 2 )
    {
        a = 0;
        b = 1;
        for( int i = 3;i <= n; i++ )
        {
            r = a + b;
            a = b;
            b = r;
        }
        return r;
    }
}
