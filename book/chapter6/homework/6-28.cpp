#include <iostream>
using namespace std;

bool isperfect( int );

int main()
{
    int x;
    for( int i=2; i <= 1000; i++ )
    {
        if( isperfect( i ) )
        {
            cout << i << " ";
        }
    }
}

bool isperfect( int in )
{
    int add = 1;
    for( int i = 2; i < in; i++ )
    {
        if( in % i == 0 )
        {
            add += i;
        }
    }
    if( add == in )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
