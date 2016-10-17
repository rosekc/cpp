#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;
void multiplication();
string talking(bool);

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
        cout<<talking(false)
            <<x<<"*"<<y<<"=";
        cin>>r;
    }
    cout<<talking(true);
}
string talking(bool x)
{
    srand(time(0));
    int a=1+rand()%4;
    if(x)
    {
        if(a==1)
        {
            return "Very good!\n";
        }
        if(a==2)
        {
            return "Excellent!\n";
        }
        if(a==3)
        {
            return "Nice work!\n";
        }
        if(a==4)
        {
            return "Keep up the good work!\n";
        }
    }
    else
    {
        if(a==1)
        {
            return "No. please try again.\n";
        }
        if(a==2)
        {
            return "Wrong. Try once more.\n";
        }
        if(a==3)
        {
            return "Don't give up!\n";
        }
        if(a==4)
        {
            return "No. Keep trying.\n";
        }
    }
}
