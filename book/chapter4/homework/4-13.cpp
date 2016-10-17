#include <iostream>
#include <iomanip>>
using namespace std;

int main()
{
        double mile, gallon, totalM = 0, totalG = 0;

        while (1)
        {
              cout << "Enter miles driven (-1 to quit): ";
              cin >> mile;

              if ( mile == -1 )
              {
                  break;
              }

              cout << "Enter gallons used: ";
              cin >> gallon;

              cout << "MPG this tankful: " << setprecision( 6 ) << fixed << mile / gallon << endl;

              totalM += mile;
              totalG += gallon;

              cout << "Total MPG: "  << setprecision( 6 ) << fixed << totalM / totalG << "\n" << endl;
        }
}
