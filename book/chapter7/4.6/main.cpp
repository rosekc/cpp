#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int board[ 8 ][ 8 ] = { 0 };
const int horizontal[ 8 ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
const int vertical[ 8 ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
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
int currentRow = 3;
int currentColumn = 4;


bool edgeCheck( int, int );
void kMove( int, int );
bool reachedCheck( int, int );
int chooseWay();

int main()
{
	for( int i = 1; i <= 64; i++ )
	{
		int way = chooseWay();

		if( way == -1 )
		{
			cout << "OMG!!fail to find way!T_T" << endl;
			break;
		}

		kMove( way, i );
	}
	cout << "OMG!!you did it!";
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



	for( int i = 0; i <= 7; i++ )
	{
		int tmpc, tmpr;
		tmpc = currentColumn + horizontal[ moveWay ];
		tmpr = currentRow + vertical[ moveWay ];

		if( edgeCheck( tmpr, tmpc ) )
		{
            assessibility[ tmpr ][ tmpc ]--;
		}
	}

}

int chooseWay()
{
	int wayAssess[ 8 ] = { 0 };
	int assessMinNum = 10;
	int minCon = 0;
	int randNum;


	for( int i = 0; i <= 7; i++ )
	{
		int tmpc, tmpr;
		tmpc = currentColumn + horizontal[ i ];
		tmpr = currentRow + vertical[ i ];


		if( edgeCheck( tmpr, tmpc )
		        && assessMinNum > assessibility[ tmpr ][ tmpc ]
		        && reachedCheck( tmpr, tmpc ) )
		{
			wayAssess[ i ] = assessibility[ tmpr ][ tmpc ];
			assessMinNum = assessibility[ tmpr ][ tmpc ];
		}
	}


	for( int i = 0; i <= 7; i++ )
	{
		if( assessMinNum == wayAssess[ i ] )
		{
			minCon++;
		}
	}

	randNum = ( rand() % minCon ) + 1;

	for( int i = 0; minCon > 0; i++ )
	{
		if( assessMinNum == wayAssess[ i ] )
		{
			return i;
		}
	}

	return -1;
}
