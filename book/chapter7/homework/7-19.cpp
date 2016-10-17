#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int t = 0;

int rollDice();
bool coreGame();

int main()
{
    srand( time( 0 ) );
    int data[ 2 ] = { 0 };

    for( int i = 1; i <= 20; i++ )
    {
        data[ coreGame() ]++;

        cout << setw( 5 ) << i;

        for( int a = 0; a <= 1; a++ )
        {
            cout << setw( 5 ) << data[ a ];
        }

        cout << endl;
    }

    cout << "Avg time: " << t / 20;
}

bool coreGame()
{
	enum Status { CONTINUE, WON, LOST };

	int myPoint;
	Status gameStatus;

	int sumOfDice = rollDice();

	switch ( sumOfDice )
	{
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sumOfDice;
        //cout << "Point is " << myPoint << endl;
        break;
	}

	while ( gameStatus == CONTINUE )
    {
        sumOfDice = rollDice();

        if ( sumOfDice == myPoint )
        {
            gameStatus = WON;
        }
        else if ( sumOfDice == 7 )
        {
            gameStatus = LOST;
        }
    }

    if( gameStatus == WON )
    {
        //cout << "Player wins" << endl;
        return 0;
    }
    else
    {
        //cout << "Player loses" << endl;
        return 1;
    }
}

int rollDice()
{
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;

    int sum = die1 + die2;

    t++;

    //cout << "Player rolled " << die1 << " + " << die2 <<
    //    " = " << sum << endl;
    return sum;
}
