#include <iostream>
using namespace std;

int main()
{
	string employeeType;
	int flag, salary, time, rate, saleVolumn, pieceAmount;

	while ( flag != -1 )
	{
		cout << "Please type employee number(-1 to exit): ";
		cin >> flag;

		switch ( flag )
		{
		case 1:
			employeeType = "Manager";

			cout << "Salary:";
			cin >> salary;

			break;
		case 2:
			employeeType = "Hourly worker";

			cout << "Work time: ";
			cin >> time;

			cout << "Salary per hour: ";
			cin >> rate;

			if ( time <= 40 )
			{
				salary = time * rate;
			}
			else if ( time > 40 )
			{
				salary = 1.5 * rate * time;
			}
			else
			{
				cout << "Error!" << endl;
			}

			break;
		case 3:
			employeeType = "Commission worker";

			cout << "Sale Volumn: ";
			cin >> saleVolumn;

			salary = 250 + 0.057 * saleVolumn;

			break;
		case 4:
			employeeType = "Piece worker";

			cout << "Piece amount: ";
			cin >> pieceAmount;

			cout << "Salary per piece: ";
			cin >> rate;

			salary = pieceAmount * rate;

			break;
      case -1:
         break;
		default:
			cout << "Error employee type!" << endl;
		}

		if
		(
		   flag == 1 || flag == 2 || flag == 3 || flag == 4
		)
		{
			cout << "Employee type: " << employeeType << endl;
			cout << "Salary: " << salary << endl;
			cout << "\n";
		}

	}
}
