#include <iostream>
using namespace std;

int f1( int, int );
int f2( int, int );
void f3( int );

int main()
{
    int in;
    cin >> in;

    f3( in );
}

int f1( int x, int y )
{
    return x / y;
}
int f2( int x, int y )
{
    return x % y;
}

void f3( int x )
{
    if( f1( x, 10 ) == 0 )
    {
        cout<<x<<" ";
    }
    else
    {
        f3( f1( x, 10 ) );
        cout << f2( x, 10 ) << " ";
    }
}
