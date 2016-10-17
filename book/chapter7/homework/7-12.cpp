#include <iostream>
#include <iomanip>
using namespace std;

int bubbleSort( int [], const int );
int showArray( int [], const int );

int main()
{
	const int size = 8;
	int data[ 8 ] = { 1, 8, 3, 6, 4, 2, 5, 7 };

	showArray( data, size );
	bubbleSort( data, size );
	showArray( data, size );
}

int bubbleSort( int in[], const int size )
{
	int key;
	int flag;

	for ( int c = 0; c < size; c++ )
	{
	    flag = 0;

		for ( int i = 1; i <= size - c; i++ )
		{
			if ( in[ i - 1 ] > in[ i ] )
			{
				key = in[ i - 1 ];
				in[ i - 1 ] = in[ i ];
				in[ i ] = key;

				flag = 1;
			}
		}

		if ( flag == 0 )
		{
			break;
		}
	}
}

int showArray( int in[], const int size )
{
	for ( int i = 0; i < size; i++ )
	{
		cout << in[ i ] << " ";
		if ( i % 5 == 4 )
		{
			cout << endl;
		}
	}
	cout << endl;
	cout << endl;
}
