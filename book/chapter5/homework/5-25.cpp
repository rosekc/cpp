#include <iostream>
using namespace std;

int main()
{
	int count;
	int flag = 0;

	for ( count = 1; ( count <= 10 ) && ( flag == 0 ) ; )
	{
		if ( count == 5 )
		{
			flag = 1;
		}



		if ( flag == 0 )
		{
			cout << count << " ";
			count++;
		}

	}
	cout << "\nBroke out of loop at count = " << count << endl;;
}
