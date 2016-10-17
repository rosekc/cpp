#include <iostream>
#include<iomanip>
using namespace std;

int celsius( int );
int fahrenheit( int );

int main()
{
	cout << left << setw( 18 ) << "Centigrade degree" << setw ( 18 ) << "Fahrenheit degree" << endl;
	for( int i = 0; i <= 100; i++ )
	{
		cout << left << setw( 18 ) << i << setw( 18 ) << fahrenheit( i ) << endl;
	}

	cout << endl<< left << setw( 18 )<< "Fahrenheit degree" << setw( 18 ) << "Centigrade degree" << endl;
	for( int i = 32; i <= 212; i++)
	{
		cout << left << setw( 18 ) << i << setw( 18 ) << celsius( i ) << endl;
	}
}

int celsius( int x )
{
	return ( x - 32 ) / 1.8;
}

int fahrenheit( int x )
{
	return x * 1.8 + 32;
}
