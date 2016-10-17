#include <iostream>
using namespace std;

int main()
{
        int a, b, c, d, e, big, small, tmp;
        cout << "please type 5 intergers:";
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;
        tmp = a;

        if (tmp < b)
        {
                tmp = b;
        }
        if (tmp < c)
        {
                tmp = c;
        }
        if (tmp < d)
        {
                tmp = d;
        }
        if (tmp < e)
        {
                tmp = e;
        }

        big = tmp;
        tmp = a;

        if (tmp > b)
        {
                tmp = b;
        }
        if (tmp > c)
        {
                tmp = c;
        }
        if (tmp > d)
        {
                tmp = d;
        }
        if (tmp > e)
        {
                tmp = e;
        }

        small = tmp;

        cout << "largest:" << big << "\nsmallest:" << small << endl;
}
