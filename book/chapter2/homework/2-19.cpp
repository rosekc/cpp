#include <iostream>
using namespace std;

int main()
{
   int a, b, c;
   int big, small;

   cout << "Input three different integers:";
   cin >> a >> b >> c;

   cout << "Sum is " << a + b + c << "\nAverage is "
    << ( a + b + c ) / 3 << "\nProduct is " << a * b * c
    << endl;

    if ( a > b && a > c && b > c )
    {
        big = a;
        small = c;
    }
    else if ( a > c && a > b && c > b )
    {
        big = a;
        small = b;
    }
    else if ( b > a && b > c && a > c )
    {
        big = b;
        small = c;
    }
    else if ( b > a && b > c && c > a )
    {
        big = b;
        small = a;
    }
    else if ( c > a && c > b && a > b )
    {
        big = c;
        small = b;
    }
    else
    {
        big = c;
        small = a;
    }

    cout << "Smallest is " << small;
    cout << "\nLargest is " << big;
}
