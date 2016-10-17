#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include<stdlib.h>
using namespace std;

void showMes()
{
	cout << "I have a number between 1 and 1000." << endl;
	cout << "Can you guess my number?" << endl;
}

int getNumber()
{
	return rand() % 1000 + 1;
}

void checkNumber( int get )
{
	int time = 0;

	while ( 1 )
	{
		int in;
		cin >> in;
		time++;

		if ( in > get )
		{
			cout << "Too high. Try agin." << endl;
		}
		else if ( in < get )
		{
			cout << "Too low. Try again." << endl;
		}
		else if ( in == get )
		{
			cout << "Would you like to play again?(y or n)";
			break;
		}
	}
}

bool getagv( char in )
{
	if ( in == 'y' || in == 'Y' )
	{
		system( "cls" );
		return 1;
	}
	else if ( in == 'n' || in == 'N' )
	{
		return 0;
	}
}

void resetGame()
{
	srand( time( 0 ) );
	cout << "Plseas type your first guess." << endl;
}

void coreGame()
{
	char in;
	do
	{
		resetGame();
		checkNumber(  getNumber() );
		cin >> in;
	}
	while ( getagv( in ) );
}

int main()
{
	showMes();
	coreGame();
}
