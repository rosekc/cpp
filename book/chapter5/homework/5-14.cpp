#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	int amount;
	double salesVolume = 0;

	while ( input != -1 )
	{
		cout << "Please type product number(-1 to exit) : ";
        cin >> input;

		if ( input == -1 )
        {
            break;
        }

		cout << "Please type the amount of product: ";
		     cin >> amount;

		switch ( input )
		{
		case 1:
			salesVolume += ( 2.98 * amount );
			break;
        case 2:
			salesVolume += ( 4.5 * amount );
			break;
        case 3:
			salesVolume += ( 9.98 * amount );
			break;
        case 4:
			salesVolume += ( 4.49 * amount );
			break;
        case 5:
			salesVolume += ( 6.87 * amount );
			break;
        default:
            cout << "Error input!" << endl;;
            break;
		}
	}

	cout << "Sales Volume: $" << salesVolume  << endl;
}
