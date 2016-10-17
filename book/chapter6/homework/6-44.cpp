#include <iostream>
#define EOF -1

using namespace std;

int main()
{
    int c;
    cin>>c;
    if(c!=EOF)
    {
        cout<<c<<endl;
        main();
    }
}
