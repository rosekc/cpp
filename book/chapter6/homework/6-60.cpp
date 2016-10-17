#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;
void calculate(int,int);
string talking(bool);
int rights;
int main()
{
    int n,d,k;
    cout<<"How many studetnts want to practise: ";
    while(1)
    {
        cin>>n;
        if(n>0)
        {
            break;
        }
        cout<<"Error: you enter a wrong number!\n"
            <<"How many students want to practise: ";
    }
    for(int j=1; j<=n; ++j)
    {
        rights=0;
        cout<<"1.Only addition\n"
            <<"2.Only subtraction\n"
            <<"3.Only multiplication\n"
            <<"4.Only division\n"
            <<"5.All\n"
            <<"Please enter which kind do you want to practise(1 to 5): ";
        while(1)
        {
            cin>>k;
            if(k==1 || k==2 || k==3 || k==4 || k==5)
            {
                break;
            }
            cout<<"Error: you enter a wrong number!\n"
                <<"Please enter which kind do you want to practise again(1 to 5): ";
        }
        if(k>3)
        {
            cout<<"The kind you choose has division.\n"
                <<"when you answer your answer, you should enter quotient and remainder!\n";
        }
        cout<<"Please enter which difficulty level do you want to practise(1 to 10): ";
        while(1)
        {
            cin>>d;
            if(d>0 && d<11)
            {
                break;
            }
            cout<<"Error: you enter a wrong number!\n"
                <<"Please enter which difficulty level do you want to practise again(1 to 10): ";
        }
        for(int i=1; i<=10; ++i)
        {
            calculate(d,k);
        }
        if(rights>7)
        {
            cout<<"Congratulation, you are ready to go to the next level!\n";
        }
        else
        {
            cout<<"Please ask your teacher for extra help.\n";
        }
    }
    return 0;
}
void calculate(int d,int k)
{
    long long x,y,r,q;
    srand(time(0));
    x=rand()%(10*d);
    y=rand()%(10*d);
    if(k==5)
    {
        k=1+rand()%4;
    }
    switch(k)
    {
    case 1:
        cout<<x<<"+"<<y<<"=";
        cin>>r;
        if(r==x+y)
        {
            rights++;
            cout<<talking(true);
        }
        while(r!=x+y)
        {
            cout<<talking(false)
                <<x<<"+"<<y<<"=";
            cin>>r;
        }
        break;
    case 2:
        cout<<x<<"-"<<y<<"=";
        cin>>r;
        if(r==x-y)
        {
            rights++;
            cout<<talking(true);
        }
        while(r!=x-y)
        {
            cout<<talking(false)
                <<x<<"-"<<y<<"=";
            cin>>r;
        }
        break;
    case 3:
        cout<<x<<"*"<<y<<"=";
        cin>>r;
        if(r==x*y)
        {
            rights++;
            cout<<talking(true);
        }
        while(r!=x*y)
        {
            cout<<talking(false)
                <<x<<"*"<<y<<"=";
            cin>>r;
        }
        break;
    case 4:
        while(y==0)
        {
            y=rand()%(10*d);
        }
        cout<<x<<"/"<<y<<"=";
        cin>>q>>r;
        if((y*q+r)==x)
        {
            rights++;
            cout<<talking(true);
        }
        while((y*q+r)!=x)
        {
            cout<<talking(false)
                <<x<<"/"<<y<<"=";
            cin>>r;
        }
        break;
    default:
        break;
    }
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
