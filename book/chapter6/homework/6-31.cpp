#include <iostream>
using namespace std;

int gcd( int, int );
int gcd_1( int, int );

int main()
{
    int a, b;
    cout << "Please enter two number: ";
    cin >> a >> b;
    cout << gcd( a, b );
}

int gcd( int a, int b )
{
    int min;

    if( a > b )
    {
        min = a;
    }
    else
    {
        min = b;
    }

    for( int i = min; i >= 1; i-- )
    {
        if( a % i == 0 && b % i == 0 )
        {
            return i;
        }
    }
}


int gcd_1( int a, int b )
{
    if(a<b)
    {
        a=b-a;
        b=b-a;
        a=a+b;
    }
    int r;
    r=a%b;
    while(r!=0)
    {
        a=r;
        a=b-a;
        b=b-a;
        a=a+b;
        r=a%b;
    }
    return b;
}
