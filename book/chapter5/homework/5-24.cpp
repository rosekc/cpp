#include <iostream>
using namespace std;

int main()
{
	int a;

	cin >> a;

	for ( int l = 1; l <= 2 * a - 1; l++ )
	{
		if ( l <= a )
		{
			for ( int i = 1; i <= ( a - l ); i++ )
			{
				cout << " ";
			}

			for ( int i = 1; i <= 2 * l - 1; i++ )
			{
				cout << "*";
			}

			for ( int i = 1; i <= ( a - l ); i++ )
			{
				cout << " ";
			}

			cout << endl;
		}

		if ( l > a )
		{
			for ( int i = 1; i <= (  l - a ); i++ )
			{
				cout << " ";
			}

			for ( int i = 1; i <= ( 4 * a - 2 * l - 1) ; i++ )
			{
				cout << "*";
			}

			for ( int i = 1; i <= ( l - a ); i++ )
			{
				cout << " ";
			}

			cout << endl;
		}
	}

}
