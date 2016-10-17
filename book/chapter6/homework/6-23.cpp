#include <iostream>
using namespace std;

void display( int, char );

int main()
{
    int s;
    char c;
    cin >> s;
    cin >> c;
    display( s, c );
}

void display( int x, char y )
{
    for(int i = 1; i <= x; i++ )
    {
        for(int j = 1; j <= x; j++ )
        {
            cout << y;
        }
        cout << endl;
    }
}
