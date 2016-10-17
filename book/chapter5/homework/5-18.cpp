#include <iostream>
#include <iomanip>
using namespace std;

void bin(int n)
{
    if(n<2)
        cout<<n;
    if(n>=2)
    {
        bin(n/2);
        cout<<n%2;
    }
}

int main()
{
    cout << "dec" << setw(4) << "bin" << setw(8) << "oct" <<  setw(4) << "hex" <<  setw(4) << endl;;
    for ( int i = 1; i <= 256; i ++ )
    {
        cout << dec  << i << setw(4);
        bin(i);
        cout<< setw(8) << oct << i << setw(4)<< hex << i << setw(4)<< endl;
    }
}
