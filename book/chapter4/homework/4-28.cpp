#include <iostream>
using namespace std;

int main()
{
    for ( int i = 1; i <= 4; i++ )
    {
        for (int i =1; i <= 8; i++ )
        {
            cout << "* ";
        }
        cout << endl;
        cout << " ";
        for (int i = 1; i<= 8; i++ )
        {
            cout << "* ";
        }
        cout << endl;
    }
}
