#include <iostream>
using namespace std;
int main()
{
        char a;
        cout << "type a char:";
        cin >> a;

        cout << "ASCII:" << static_cast< int >(a);
}
