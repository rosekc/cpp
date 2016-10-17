#include <iostream>

using namespace std;

int main()
{
    int in, tmp = 1, con = 0;

    cin >> in;
    for ( int i = 1; i <= in; i++ )
    {
        tmp *= i;


        while ( tmp % 10 == 0 )
        {
            tmp /= 10;
            con++;
        }

        if ( tmp >= 10000000 )
        {
            tmp %= 10000000;
        }

    }
    cout << con;
}
