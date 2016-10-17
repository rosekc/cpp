#include <iostream>
using namespace std;

int main()
{
        int max, b, c, mid, min;

        cout << "a, b, c=？" << endl;

        cin >> max;

        cin >> b;

        if (b > max)
        {
                mid = max;
                max = b;
        }
        else
        {
                mid = b;
        }

        cin >> c;

        if (c > max)
        {
                min = mid;
                mid = max;
                max = c;
        }
        else if (c <= max && c > mid)
        {
                min = mid;
                mid = c;
        }
        else
        {
                min = c;
        }

        if ( ( min * min ) + (mid * mid ) == ( max * max ) )
        {
                cout << "right-angle triangle!" << endl;
        }
        else
        {
                cout << "not right-angle triangle" << endl;
        }
}
