#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int  tmp;
	double rate = 1.05, amount = 24;

	cout << "Year: " ;

	cin >> tmp;

    cout << setprecision ( 2 ) << fixed;
	cout << "Rate" << setw( 21 ) << "Amount on deposit" << endl;

	for ( ; rate <= 1.1; rate += .01 )
	{
		for ( int year = 1626; year <= tmp; year++ )
		{
			amount *=  rate ;
        }
		cout << setw( 4 ) << rate - 1 << setw( 21 ) << amount << endl;

	}

}
