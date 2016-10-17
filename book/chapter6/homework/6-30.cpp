#include <iostream>
using namespace std;

void inversion( int );

int main()
{
    int in;
    cout << "Please enter a integer: ";

    cin >> in;

    inversion( in );
}
void inversion( int in )
{
    int tmp = 0;

    while( in % 10 != 0 )
    {
        tmp *= 10;
        tmp += in % 10;
        in /= 10;
    }
    cout << tmp;
}
