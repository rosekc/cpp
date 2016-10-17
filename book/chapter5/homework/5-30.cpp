#include <iostream>
using namespace std;

int main()
{
	int con = 0;
	string qus;
	char ans, tmp;

	for (int i = 1; i <= 5; i++ )
	{
		switch ( i )
		{
		case 1:
			qus = "\n1+1=?\nA. 1\tB. 2\nC. 3\tD. 4\n";
			ans = 'B';
			cout << qus << "Answer: ";
			cin >>  tmp;

			if ( tmp == ans )
			{
				cout << "Right!";
				con++;
			}
			else
			{
				cout << "Wrong!";
			}
			break;
		case 2:
			qus = "\n1+1=?\nA. 1\tB. 2\nC. 3\tD. 4\n";
			ans = 'B';
			cout << qus << "Answer: ";
			cin >>  tmp;

			if ( tmp == ans )
			{
				cout << "Right!";
				con++;
			}
			else
			{
				cout << "Wrong!";
			}
			break;
		case 3:
			qus = "\n1+1=?\nA. 1\tB. 2\nC. 3\tD. 4\n";
			ans = 'B';
			cout << qus << "Answer: ";
			cin >>  tmp;

			if ( tmp == ans )
			{
				cout << "Right!";
				con++;
			}
			else
			{
				cout << "Wrong!";
			}
			break;
		case 4:
			qus = "\n1+1=?\nA. 1\tB. 2\nC. 3\tD. 4\n";
			ans = 'B';
			cout << qus << "Answer: ";
			cin >>  tmp;

			if ( tmp == ans )
			{
				cout << "Right!";
				con++;
			}
			else
			{
				cout << "Wrong!";
			}
            break;
		}
		case 5:
			qus = "\n1+1=?\nA. 1\tB. 2\nC. 3\tD. 4\n";
			ans = 'B';
			cout << qus << "Answer: ";
			cin >>  tmp;

			if ( tmp == ans )
			{
				cout << "Right!";
				con++;
			}
			else
			{
				cout << "Wrong!";
			}
            break;
		}
		cout << endl;
	}
	if ( con = 5 )
    {
        cout << "Excellent" << endl;
    }
    else if ( con = 4 )
    {
        cout << "Very good" << endl;
    }
    else
        {
            cout << "233";
        }
}
