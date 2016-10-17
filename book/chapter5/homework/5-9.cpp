#include <iostream>
using namespace std;

int main()
{
    int tmp = 1;
    for ( int i = 1; i <= 15; i ++ )
    {
        if ( i % 2 == 1 )
        {
            tmp *= i;
        }
    }
    cout << tmp;
}
