#include <iostream>
using namespace std;

int main()
{
	double population = 70;
	double rate;
	double growth;
	int flag = 0, y1;

	cout << "rate=?";
	cin >> rate;

	cout << "Year\tPopulation\tPopulation growth in year\n";

	for ( int y = 2016; y <= 2016 + 70; y ++ )
	{
		growth = population * rate;
		population *= ( 1 + rate );
		cout << y << "\t" << population << "\t" << growth << "\n";

		if ( population >= 140 && flag == 0 )
		{
			y1 = y;
			flag = 1;
		}
	}

	cout << "In " << y1 << ", the population is twice more than 2016's.";
}
