#include <iostream>
using namespace std;

void display( int );

int main()
{
    int in;
    cin >> in;
    display( in );
}

void display( int x )
{
    for( int i = 1; i <= x; i++ )
    {
        for(int j = 1; j <= x; j++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
