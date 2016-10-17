#include <iostream>
using namespace std;

void hanoi( int, int, int, int );

int main()
{
    int in;
    cin >> in;
    hanoi( in ,1, 3, 2 );
}
void hanoi( int a, int b, int c, int d )
{

    if( a == 1 )
    {
        cout << b << "¡ú" << c << endl;
    }
    else
    {
        hanoi( a - 1, b, d, c );
        cout << b << "¡ú" << c << endl;
        hanoi( a - 1, d, c, b );
    }
}
