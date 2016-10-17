#include <iostream>
using namespace std;

double minimum ( double, double, double );

int main()
{
	double x, y, z;
	cin >> x >> y >> z;

	cout << "Minimum is: " << minimum( x, y, z );
}

double minimum ( double x, double y, double z )
{
	if( x <= y && x <= z )
	{
		return x;
	}
	else if( y <= x && y <= z )
	{
		return y;
	}
	else if( z <= y && z <= x )
	{
		return z;
	}
}
