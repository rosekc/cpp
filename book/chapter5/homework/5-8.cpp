#include <iostream>
using namespace std;

int main()
{
    int con, tmp, small, flag = 0;
    cout << "Type the number of interger: " ;

    cin >> con;

    for ( int i = 1; i <= con; i ++ )
    {
        cout << "Type a interger (" << i << " of " << con << "): " ;
        cin >> tmp;

        if ( flag = 0 )
        {
            small = tmp;
            flag = 1;
        }

        if ( tmp < small )
        {
            small = tmp;
        }
    }
    cout << "Smallest:" << small;
}
