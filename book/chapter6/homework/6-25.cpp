#include <iostream>
#include<cmath>

using namespace std;
int getSecond( int, int, int);
bool checkInput( int, int, int );

int main()
{
	int h1, m1, s1, h2, m2, s2;

	cout << "Please enter the first time: ";

	do
	{
		cin>>h1>>m1>>s1;
	}
	while( checkInput( h1, m1, s1 ) );

	cout << "Please enter the second time: ";

	do
	{
		cin>>h2>>m2>>s2;
	}
	while( checkInput( h1, m1, s1 ));

	cout << "Seconds between two times is: " << fabs( getSecond( h1, m1, s1 ) - getSecond( h2, m2, s2 ) );
}

bool checkInput( int h, int m, int s )
{
	if( h <= 23 && h >= 0 && m >=0 && m <= 59 && s >= 0 && s <= 59 )
	{
		return 0;
	}
	else
	{
		cout << "Error!! Please type again!" << endl;
		return 1;
	}
}

int getSecond( int x, int y, int z )
{
	return x * 3600 + y * 60 + z;
}
