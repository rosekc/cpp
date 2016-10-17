#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
void multiplication();
int main()
{
    int n;
    cout<<"How many multiplication do you want to practise: ";
    while(1)
    {
        cin>>n;
        if(n>0)
        {
            break;
        }
        cout<<"Error: you enter a wrong number!\n"
            <<"How many multiplication do you want to practise: ";
    }
    for(int i=1; i<=n; ++i)
    {
        multiplication();
    }
    return 0;
}
void multiplication()
{
    int x,y,r;
    srand(time(0));
    x=rand()%10;
    y=rand()%10;
    cout<<x<<"*"<<y<<"=";
    cin>>r;
    while(r!=x*y)
    {
        cout<<"Sorry, your answer is wrong, please try it again.\n"
            <<x<<"*"<<y<<"=";
        cin>>r;
    }
    cout<<"Well done!\n";
}
