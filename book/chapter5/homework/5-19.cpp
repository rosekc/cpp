#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double out = 0;

   cout << setprecision(16) << fixed;
   cout << "i" << setw(21) << "pai"  << endl;

   for ( int i = 1; i <= 1000; i ++ )
   {
      if ( i % 2 == 1 )
      {
         out += 4.0 / ( 2 * i - 1 );
      }
      else
      {
         out -= 4.0 / ( 2 * i - 1 );
      }
      cout << setw (4) << i << setw(21) << out  << endl;
   }

}
