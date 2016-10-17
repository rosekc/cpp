#include <iostream>
using namespace std;

int main()
{
	for ( int c = 1; c <= 10; c++ )
	{
		for ( int i = 1; i <= c ; i++ )
		{
			cout << '*';
		}

		for ( int i = 1; i <= ( 11 - c ); i++ )
        {
            cout << ' ';
        }

        for ( int i = 1; i <= ( 11 - c ); i++ )
        {
            cout << '*';
        }

        for ( int i = 1; i <= 2 * c; i++ )
        {
            cout << ' ';
        }

        for ( int i = 1; i <= ( 11 - c ); i++ )
        {
            cout << '*';
        }

        for ( int i = 1; i <= ( 11 - c ); i++ )
        {
            cout << ' ';
        }

        for ( int i = 1; i <= c ; i++ )
		{
			cout << '*';
		}

		cout << endl;
	}
}
