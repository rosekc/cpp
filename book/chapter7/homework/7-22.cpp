#include <iostream>
#include <iomanip>
using namespace std;

const int salesmanCon = 4;
const int productCon = 5;
int data[ salesmanCon ][ productCon ] = { 0 };

void inputData( int, int, int );
void printData( int, int );

int main()
{
	int salesmanNo, productNo, saleAmount;

	do
	{
		cout << "Please type in salesman Number( -1 to exit): ";
		cin >> salesmanNo;

		if( salesmanNo == -1 )
		{
			break;
		}

		do
		{
			cout << "Please type in product Number( -1 to exit): ";
			cin >> productNo;

			if( productNo == -1 )
			{
				break;
			}
			do
			{
				cout << "Please type in sale Amount( -1 to exit): ";
				cin >> saleAmount;

				if( saleAmount == -1 )
				{
					break;
				}

				inputData( salesmanNo, productNo, saleAmount );
			}
			while( 1 );

		}
		while( 1 );

	}
	while( 1 );

	printData( salesmanCon, productCon );
}

void inputData( int salesmanNo, int productNo, int saleAmount )
{
	data[ salesmanNo - 1 ][ productNo - 1 ] += saleAmount;
}

void printData( int salesmanCon, int productCon )
{
	cout << left << setw( 8 ) << "Product";

	for( int i = 1; i <= salesmanCon; i++ )
	{
		cout << setw( 5 ) << i;
	}
	cout << endl;

	for( int i = 1; i <= productCon; i++ )
	{
		cout << setw( 8 ) << i;
		for( int j = 0; j < salesmanCon; j++ )
		{
			cout << setw( 5 ) << data[ i - 1 ][ j ];
		}
		cout << endl;
	}
}
