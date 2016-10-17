#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int flip();

int main()
{
    int x = 0,y = 0;
    srand( time( 0 ) );

    for( int j = 1; j <= 100; j++ )
    {
        if( flip() == 0 )
        {
            y++;
        }
        else
        {
            x+=1;
        }
    }
    cout<<"head: "<<x<<endl;
    cout<<"back: "<<y<<endl;
    return 0;
}

int flip()
{
    return rand()%2;
}
