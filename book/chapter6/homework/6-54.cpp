#include <iostream>
#include<string>

using namespace std;
template<class A>
A maximum(A one,A two)
{
    if(one<two)
    {
        return two;
    }
    else if(one>two)
    {
        return one;
    }
}
int main()
{
    int x1,y1;
    string x2,y2;
    double x3,y3;
    cout<<"Please enter two integer numbers: ";
    while(1)
    {
        cin>>x1>>y1;
        if(!(x1==y1))
        {
            break;
        }
        cout<<"Error: you enter two same integer numbers!\n"
            <<"Please enter two integer numbers again: ";
    }
    cout<<"The maximum number is: "<<maximum(x1,y1)<<endl<<endl;

    cout<<"Please enter two strings: ";
    while(1)
    {
        cin>>x2>>y2;
        if(!(x2==y2))
        {
            break;
        }
        cout<<"Error: you enter two same strings!\n"
            <<"Please enter two strings again: ";
    }
    cout<<"The maximum strings is: "<<maximum(x2,y2)<<endl<<endl;

    cout<<"Please enter two double numbers: ";
    while(1)
    {
        cin>>x3>>y3;
        if(!(x3==y3))
        {
            break;
        }
        cout<<"Error: you enter two same double numbers!\n"
            <<"Please enter two double numbers again: ";
    }
    cout<<"The maximum double number is: "<<maximum(x3,y3)<<endl;
    return 0;
}
