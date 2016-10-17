#include <iostream>
using namespace std;

bool multiple( int, int );

int main()
{
    int x, y;

    cin >> x >> y;
    if( multiple( x, y ) )
    {
        cout<<y<<" is a multiple of "<<x<<endl;
    }
    else
    {
        cout << y << " is not a multiple of " << x << endl;
    }
    return 0;
}
bool multiple( int x, int y )
{
    if( y % x == 0 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
