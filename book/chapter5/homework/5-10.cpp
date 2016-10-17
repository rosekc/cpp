#include <iostream>
using namespace std;

int factorial( int i )
{
        if (i > 1)
        {
                return i * factorial ( i - 1);
        }
        else
        {
                return 1;
        }
}

int main()
{
    cout << "number\tfactorial" << endl;

    for ( int i = 1; i <= 5; i++ )
    {
        cout << i << "\t" << factorial( i ) <<endl;
    }
}
