#include <iostream>
#include<iomanip>

using namespace std;
unsigned long factorial(unsigned long);
int s=1;
int main()
{
    for(int counter=0;counter<=10;counter++)
    {
        s=1;
        cout<<setw(2)<<counter<<"!="<<factorial(counter)
            <<endl;
    }
    return 0;
}
unsigned long factorial(unsigned long number)
{
    if(number<=1)
    {
        cout<<s<<"  "<<number;
        cout<<endl;
        return 1;
    }
    else
    {
        cout<<s<<"  "<<number;
        cout<<endl;
        s*=number;
        return number*factorial(number-1);
    }
}
