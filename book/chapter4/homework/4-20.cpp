#include <iostream>
using namespace std;

int main()
{
    int passes = 0, failures = 0, studentCounter = 1, result;

    while ( studentCounter <= 20 )
    {
        do
        {
            cout << "Enter result (1 = pass, 2 = fail): ";
            cin >> result;

            if ( result == 1 )
            {
                passes ++;
            }
            else if ( result == 2 )
            {
                failures ++;
            }
            else
            {
                cout << "Error" << endl;
            }
        }while ( result != 1 && result != 2 );

        studentCounter ++;
    }

    cout <<"Passed " << passes << "\nFailed " << failures << endl;

    if ( passes > 8 )
    {
        cout << "Bonus to instructor!" << endl;
    }
}
