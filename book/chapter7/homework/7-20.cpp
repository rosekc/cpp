#include <iostream>
#include <iomanip>
using namespace std;

bool seat[ 10 ] = { 0 };

bool seatStatus( int );
void getSeat( int );
void setSeat( int );
int searchSeat( int );
void printTicket( int );
void bookFail();

int main()
{
	int in;

	cout << "Please type 1 for First Class, 2 for Second Class" << endl;

	while ( 1 )
	{
		cin >> in;
		getSeat( in );
	}
}

void setSeat( int in )
{
	seat[ in - 1 ] = 1;
	printTicket( in );
}

bool seatStatus( int in )
{
	return seat[ in - 1 ];
}

int searchSeat( int ticketticketClass )
{
	int range1, range2;

	if ( ticketticketClass == 1 )
	{
		range1 = 1;
		range2 = 5;
	}
	else
	{
		range1 = 6;
		range2 = 10;
	}

	for ( int i = range1; i <= range2; i++ )
	{
		if ( !seatStatus( i ) )
		{
			return i;
		}
	}
	return -1;
}

void getSeat( int ticketClass )
{
	int status = searchSeat( ticketClass );

	if ( status == -1 )
	{

		if( ticketClass == 2 )
		{
			ticketClass = 1;
		}
		else
		{
			ticketClass = 2;
		}

		status = searchSeat( ticketClass );

		if( status == -1 )
		{
            bookFail();
		}
		else
		{
			cout << "Would you like to take other ticketClass ticket? ( y and n ) ";

			char in;

			cin >> in;

			if ( in == 'y' )
			{
				setSeat( status );
			}
			else
			{
				bookFail();
			}
		}
	}
	else
	{
		setSeat( status );
	}
}

void bookFail()
{
	cout << "Ticket have sold out. Next flight is 3 hours later." << endl;
}

void printTicket( int ticketNumber )
{
	cout << "****************************" << endl;
	cout << "*       BOARDING PASS      *" << endl;
	cout << "*                          *" << endl;
	cout << "*   Flight: CPPXX          *" << endl;
	if ( ticketNumber >= 1 && ticketNumber <= 5 )
	{
		cout << "*   Class: First Class     *" << endl;
	}
	else
	{
		cout << "*   Class: Second Class    *" << endl;
	}
	cout << "*   No." << setw( 5 ) << ticketNumber << "               *" << endl;
	cout << "*                          *" << endl;
	cout << "*                          *" << endl;
	cout << "****************************" << endl;
}
