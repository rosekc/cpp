#include <iostream>
using namespace std;

bool iseven( int );

int main()
{
	int x;
	cin >> x;
	if( iseven( x ) )
	{
		cout << x << " is even" << endl;
	}
	else
	{
		cout << x << " is odd" << endl;
	}
}

bool iseven( int x )
{
	if( x % 2 == 0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
