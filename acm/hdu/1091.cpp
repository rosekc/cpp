//hduacm 1091
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    while( cin >> a >> b && ( a || b ) ) //Ҫ��a��bͬʱΪ0ʱ���˳�(terminates the input)
    {
        cout << a + b << endl;
    }
}
