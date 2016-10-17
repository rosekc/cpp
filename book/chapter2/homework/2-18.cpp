#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "plsase type 2 numbers" << endl;
    cin >> a >> b;

    if ( a > b )
    {
        cout << a << " is large";
    }
    else if ( a < b )
    {
        cout << b << " is large";
    }
    else
    {
        cout << "equal!!";
    }

}
