#include <iostream>
using namespace std;

int main()
{

    int a, a2 = 1, b, c = 1, tmp, out = 0;
    cin >> a;

  while ( a >= 10 )
    {
        tmp = a - (a / 10 * 10);
        a = a / 10;

        out += tmp * a2;
        a2 *= 2;
    }

    out += a2 * a;

    cout << out;
}
