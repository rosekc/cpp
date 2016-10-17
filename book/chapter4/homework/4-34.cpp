#include <iostream>
using namespace std;

int factorial( int i )
{
        if (i > 1)
        {
                return i * factorial ( i - 1);
        }
        else
        {
                return 1;
        }
}

int intpow(int x, int a)
{
        int tmp = 1;

        for ( int i = 1; i <= a; i ++ )
        {
                tmp *= x;
        }

        return tmp;

}


int main()
{

        int i, x;
        double e = 1, ex = 1;

        cout << "i, x=?"

        cin >> i;
        cin >> x;

        for ( int c = 1; c <= (i - 1); c++ )
        {
                e += ( 1 / static_cast< double >( factorial( c ) ) );
                ex += (intpow( x , c ) ) / factorial( c ) ;
        }

        cout << "e=" << e << endl;
        cout << "e^x=" << ex << endl;



}
