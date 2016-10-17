#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int horizontal[ 8 ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
const int vertical[ 8 ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int currentRow = 0;
int currentColumn = 0;

void printBoard();
bool edgeCheck( int, int );
void kMove( int, int );
bool reachedCheck( int, int );
int chooseWay();
void assessibilityChange( int[][] );
bool knightTour( int, int );

int main()
{
	int con = 0;

	for( int i = 0; i <= 7; i++ )
	{
		for( int j = 0; j <= 7; j++ )
		{
			if( knightTour( i, j ) )
			{
				con++;
			}
		}
	}

	cout << "Result: " << endl;
	cout << "Success tour: " << con << endl;
}

void assessibilityChange( int in[][] )
{
	for ( int i = 0; i <= 7; i++ )
	{
		int tmpc, tmpr;
		tmpc = currentColumn + horizontal[ i ];
		tmpr = currentRow + vertical[ i ];

		if ( edgeCheck( tmpr, tmpc ) )
		{
			in[ tmpr ][ tmpc ]--;
		}
	}
}

bool knightTour( int r, int c )
{
	int board[ 8 ][ 8 ] = { 0 };
	int assessibility[ 8 ][ 8 ] =
	{
		{ 2, 3, 4, 4, 4, 4, 3, 2 },
		{ 3, 4, 6, 6, 6, 6, 4, 3 },
		{ 4, 6, 8, 8, 8, 8, 6, 4 },
		{ 4, 6, 8, 8, 8, 8, 6, 4 },
		{ 4, 6, 8, 8, 8, 8, 6, 4 },
		{ 4, 6, 8, 8, 8, 8, 6, 4 },
		{ 3, 4, 6, 6, 6, 6, 4, 3 },
		{ 2, 3, 4, 4, 4, 4, 3, 2 },
	};

	currentRow = r;
	currentColumn = c;

	srand( time( 0 ) );

	board[ currentRow ][ currentColumn ] = 1;

	assessibilityChange( assessibility );

	for ( int i = 2; i <= 64; i++ )
	{
		int way = chooseWay();

		if ( way == -1 )
		{
			return 0;
		}

		kMove( way, i );
	}
	return 1;
}


bool edgeCheck( int r, int c )
{
	return ( r <= 7 && r >= 0 && c <= 7 && c >= 0 ? 1 : 0);
}

bool reachedCheck( int r, int c )
{
	return ( board[ r ][ c ] == 0 ? 1 : 0 );
}

void kMove( int moveWay, int paceNum )
{
	int tmpc, tmpr;
	tmpc = currentColumn + horizontal[ moveWay ];
	tmpr = currentRow + vertical[ moveWay ];

	currentColumn = tmpc;
	currentRow = tmpr;
	board[ tmpr ][ tmpc ] = paceNum;

	assessibilityChange();
}

int chooseWay()
{
	int wayAssess[ 8 ] = { 0 };
	int assessMinNum = 10;
	int minCon = 0;
	int randNum;


	for ( int i = 0; i <= 7; i++ )
	{
		int tmpc, tmpr;
		tmpc = currentColumn + horizontal[ i ];
		tmpr = currentRow + vertical[ i ];

		if ( edgeCheck( tmpr, tmpc )
		        && reachedCheck( tmpr, tmpc ) )
		{
			wayAssess[ i ] = assessibility[ tmpr ][ tmpc ];

			if( assessMinNum > wayAssess[ i ] )
			{
				assessMinNum = assessibility[ tmpr ][ tmpc ];
			}
		}
		else
		{
			wayAssess[ i ] = 10;
		}

	}

	if( assessMinNum == 10 )
	{
		return -1;
	}


	for ( int i = 0; i <= 7; i++ )
	{
		if ( assessMinNum == wayAssess[ i ] )
		{
			minCon++;
		}
	}

	randNum = ( rand() % minCon ) + 1;

	for ( int i = 0; i <= 7; i++ )
	{
		if ( assessMinNum == wayAssess[ i ] )
		{
			randNum--;

			if( randNum == 0 )
			{
				return i;
			}
		}
	}
}

void printBoard()
{
	for( int i = 0; i <= 7; i++ )
	{
		for( int j = 0; j <= 7; j++ )
		{
			cout << setw( 3 ) << board[ i ][ j ];
		}
		cout << endl;
	}
	cout << endl;
}
