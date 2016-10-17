//Program B
#include <iostream>
using namespace std;

int main()
{
	int grade;

	cout << "Please tpype the march: ";
	cin >> grade;

	if ( grade >= 90 && grade <= 100 )
	{
		cout << "Grade: A" << endl;
	}
	else if ( grade < 90 && grade >= 80 )
    {
        cout << "Grade: B" << endl;
    }
    else if ( grade < 80 && grade >= 70 )
    {
        cout << "Grade: C" << endl;
    }
    else if ( grade < 70 && grade >= 60 )
    {
        cout << "Grade: D" << endl;
    }
    else if ( grade < 60 && grade >= 0 )
    {
        cout << "Grade: E" << endl;
    }
    else
    {
        cout << "Error!" << endl;
    }

}

