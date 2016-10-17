#include <iostream>
using namespace std;

int main()
{
	int flag = 0;

	for ( int count = 1; count <= 10; count++ , flag = 0 )
	{
		if ( count == 5 )
		{
			flag = 1;
		}

		if ( flag == 0 )
        {
            cout << count << " ";
        }
	}

	cout << "hhhhhhhhhhhhhhh";
}
