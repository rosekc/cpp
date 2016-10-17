#include <iostream>
using namespace std;
int main()
{
        int m, price, per, park, fee;

        cout << "type m, price, per, park, fee";
        cin >> m, price, per, park, fee;

        cout << "result:" << ( m / per) * price + park + fee;
}
