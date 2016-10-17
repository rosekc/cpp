#include <iostream>
using namespace std;

inline double circleArea( double x )
{
    return x * x * 3.1415926;
}

int main()
{
    double r;
    cout << "Please enter a r: ";
    cin >> r;
    cout << "Circle area is: " << circleArea( r );
}
