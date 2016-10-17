#include <iostream>
using namespace std;

int main()
{
    int a, a1, a2, a4, a5;

    cout << "Please type: ";
    cin >> a;

    a1 = a / 10000;
    a2 = a / 1000 - a / 10000 * 10;
    a4 = a / 10 - a / 100 * 10;
    a5 = a - a / 10 * 10;

    if ( a1 == a5 && a2 == a4 )
    {
        cout << "回文数" << endl;
    }
}
