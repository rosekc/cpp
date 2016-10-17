#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int rollDice()
{
    return rand() % 6;
}

int main()
{
    int data[ 11 ] = { 0 };

    srand( time( 0 ) );

    for( int i = 1; i <= 36000; i++ )
    {
        data[ rollDice() + rollDice() ]++;
    }

    for( int i = 0; i < 11; i++ )
    {
        cout << i + 2 << " " << data[ i ] << endl;
    }
}
