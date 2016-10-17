#include <iostream>
#include <iomanip>
using namespace std;

bool checkNumber( int [], int, int );
int showArray( int [], const int );

int main()
{
    int a[ 20 ];
    int in;
    int number = 1;

    cin >> a[ 0 ];

    while( number < 20 )
    {
        cin >> in;

        if( checkNumber( a, in, number ) )
        {
            a[ number ] = in;
            number++;
        }
    }

    showArray( a, 20 );
}

bool checkNumber( int a[], int in, int number )
{
    for( int i = 0; i < number; i++ )
    {
        if( a[ i ] == in )
        {
            cout << "Error!" << endl;
            return 0;
        }
    }
    return 1;
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
