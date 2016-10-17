#include <iostream>
using namespace std;

int main()
{
   for ( int side3 = 1; side3 <= 500; side3 ++ )
   {
      for ( int side2 = 1; side2 <= 500; side2 ++ )
      {
         for ( int side1 = 1; side1 <= 500; side1 ++ )
         {
            if ( side1 * side1 + side2 * side2 == side3 * side3 )
            {
               cout << side1 << "\t" << side2 << "\t" << side3 << endl;
            }
         }
      }
   }
}
