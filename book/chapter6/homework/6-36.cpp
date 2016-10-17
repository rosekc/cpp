#include <iostream>
using namespace std;

int power( int base, int exponent )
{
    if( exponent != 1 )
    {
        return base * power( base, exponent - 1 );
    }
    else if( exponent == 1 )
    {
        return base;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << power( a, b );
}
