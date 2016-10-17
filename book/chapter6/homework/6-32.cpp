#include <iostream>
using namespace std;

int grade(int);

int main()
{
    int g;
    cout << "Please enter a grade: ";
    cin >> g;

    cout << grade( g );
}

int grade( int x )
{
    if( x >= 90 && x <= 100 )
    {
        return 4;
    }
    else if( x >= 80 && x < 90 )
    {
        return 3;
    }
    else if( x >= 70 && x < 80 )
    {
        return 2;
    }
    else if( x >= 60 && x < 70 )
    {
        return 1;
    }
    else if( x < 60 && x >= 0 )
    {
        return 0;
    }
    else
    {
        cout << "Error!!" << endl;
        return -1;
    }
}
