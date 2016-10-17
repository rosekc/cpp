#include <iostream>

using namespace std;
int tripleByValue(int);
void tripleByReference(int &);
int main()
{
    int a,n;
    cout<<"1.tripleByValue\n"
        <<"2.tripleByReference\n"
        <<"Please enter the number before which funtion do you want to use: ";
    while(1)
    {
        cin>>a;
        if(a==1 || a==2)
        {
            break;
        }
        cout<<"Error: you enter some wrong characters!\n"
            <<"Please enter the number before which funtion do you want to use again: ";
    }
    if(a==1)
    {
        cout<<"Please enter a number: ";
        cin>>n;
        cout<<"Result is: "<<tripleByValue(n)<<endl;
    }
    else if(a==2)
    {
        cout<<"Please enter a number: ";
        cin>>n;
        tripleByReference(n);
        cout<<"Result is: "<<n<<endl;
    }
    return 0;
}
int tripleByValue(int x)
{
    return x*3;
}
void tripleByReference(int &x)
{
    x*=3;
}
