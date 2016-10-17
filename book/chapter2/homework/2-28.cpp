#include <iostream>
using namespace std;
int main()
{
        int a;

        cout << "please type a interger:";
        cin >> a;

        cout << a / 10000 << " " << a / 1000 - a / 10000 * 10
                << " " << a / 100 -a / 1000 * 10 << " " <<
                a / 10 - a / 100 * 10 << " " << a - a / 10 * 10 << endl;
}
