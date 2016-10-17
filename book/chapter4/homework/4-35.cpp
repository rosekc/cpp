#include <iostream>
using namespace std;

int encrypt( int input )
{
	int n1, n2, n3, n4, tmp;

	n1 = input / 1000;
	n2 = input / 100 - input / 1000 * 10;
	n3 = input / 10 - input / 100 * 10;
	n4 = input % 10;

	tmp = n1;
	n1 = n3;
	n3 = tmp;

	tmp = n2;
	n2 = n4;
	n4 = tmp;

	n1 = ( n1 + 7 ) % 10;
	n2 = ( n2 + 7 ) % 10;
	n3 = ( n3 + 7 ) % 10;
	n4 = ( n4 + 7 ) % 10;

	return n1 * 1000 + n2 * 100 + n3 * 10 + n4;

}

int decrypt ( int input )
{
	int n1, n2, n3, n4, tmp;

	n1 = input / 1000;
	n2 = input / 100 - input / 1000 * 10;
	n3 = input / 10 - input / 100 * 10;
	n4 = input % 10;

	tmp = n1;
	n1 = n3;
	n3 = tmp;

	tmp = n2;
	n2 = n4;
	n4 = tmp;

	n1 = ( n1 + 3 ) % 10;
	n2 = ( n2 + 3 ) % 10;
	n3 = ( n3 + 3 ) % 10;
	n4 = ( n4 + 3 ) % 10;

	return n1 * 1000 + n2 * 100 + n3 * 10 + n4;
}


int main()
{
	int input, flag;

	while (1)
	{
		cout << "type number: ";
		cin >> input;

		cout << "1.encrypt\n2.decrypt\n>";
		cin >> flag;

		switch ( flag )
		{
		case 1:
		{
			if ( encrypt ( input ) >= 1000)
			{
				cout << encrypt ( input );
			}
			else if ( encrypt( input ) >= 100)
			{
				cout << "0" << encrypt ( input );
			}
			else if ( encrypt( input ) >= 10)
			{
				cout << "00" << encrypt ( input );
			}
			else
			{
				cout << "000" << encrypt( input );
			}
			break;
		}
		case 2:
		{
			if ( decrypt ( input )  >= 1000)
			{
				cout << decrypt ( input );
			}

			else if ( decrypt ( input ) >= 100)
			{
				cout << "0" << decrypt ( input );
			}
			else if ( decrypt ( input ) >= 10)
			{
				cout << "00" << decrypt ( input );
			}
			else
			{
				cout << "000" << decrypt ( input );
			}

			break;
		}
		}
		cout << endl;
	}
}
