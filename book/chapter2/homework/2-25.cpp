#include <iostream>
using namespace std;
int main()
{
        int a, b;

        cout << "please type two interger:";
        cin >> a, b;

        if ( a % b == 0 || b % a == 0 )
        {
                cout << "是倍数";
        }
        else
        {
                cout << "不是倍数";
        }
}
