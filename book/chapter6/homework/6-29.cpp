#include <iostream>
#include <cmath>
using namespace std;

bool prime( int );

int main()
{
    for( int i = 2; i <= 10000; i++ )
    {
        if( prime( i ) )
        {
            cout << i << endl;
        }
    }
}

bool prime( int in )
{
    for( int i = 2; i < sqrt( in ); i++ )
    {
        if( in % i == 0 )
        {
            return 0;
        }
    }
    return 1;
}
