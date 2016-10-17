#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    int h[3][4];
    cout<<"Please enter four parameter: ";
    cin>>a>>b>>c>>d;
    for(int i=0;i<=3;++i)
    {
        h[c][i]=0;
        h[d][i]=0;
    }
    for(int i=0;i<=3;++i)
    {
        h[b][i]=i+1;
    }
    while(1)
    {

    }
    return 0;
}
