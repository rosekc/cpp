#include <iostream>
#include<cmath>
using namespace std;

double hypotenuse( double, double );

int main()
{
    double x, y;
    const int a = 3;
    for(int i = 1; i <= a; i++ )
    {
        cin >> x >> y;
        cout << hypotenuse( x, y ) << endl;
    }
    return 0;
}
double hypotenuse( double x, double y )
{
    return sqrt( x * x + y * y );
}
