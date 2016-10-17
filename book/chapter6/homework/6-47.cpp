#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;
    double x,y;
    cout<<"1.ceil(x)\n"
        <<"2.cos(x)\n"
        <<"3.exp(x)\n"
        <<"4.fabs(x)\n"
        <<"5.floor(x)\n"
        <<"6.fmod(x,y)\n"
        <<"7.log(x)\n"
        <<"8.log10(x)\n"
        <<"9.pow(x,y)\n"
        <<"10.sin(x)\n"
        <<"11.sqrt(x)\n"
        <<"12.tan(x)\n"
        <<"Please enter the number before what do you want to test(other to exit): ";
    cin>>a;
    while(a==1 || a==2 || a==3 || a==4 || a==5 || a==6 || a==7 || a==8 || a==9 || a==10 || a==11 || a==12)
    {
        switch(a)
        {
        case 1:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"ceil("<<x<<")="<<ceil(x)<<endl;
            break;
        case 2:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"cos("<<x<<")="<<cos(x)<<endl;
            break;
        case 3:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"exp("<<x<<")="<<exp(x)<<endl;
            break;
        case 4:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"fabs("<<x<<")="<<fabs(x)<<endl;
            break;
        case 5:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"floor("<<x<<")="<<floor(x)<<endl;
            break;
        case 6:
            cout<<"Please enter a x and y: ";
            cin>>x>>y;
            cout<<"fmod("<<x<<","<<y<<")="<<fmod(x,y)<<endl;
            break;
        case 7:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"log("<<x<<")="<<log(x)<<endl;
            break;
        case 8:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"log10("<<x<<")="<<log10(x)<<endl;
            break;
        case 9:
            cout<<"Please enter a x and y: ";
            cin>>x>>y;
            cout<<"pow("<<x<<","<<y<<")="<<pow(x,y)<<endl;
            break;
        case 10:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"sin("<<x<<")="<<sin(x)<<endl;
            break;
        case 11:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"sqrt("<<x<<")="<<sqrt(x)<<endl;
            break;
        case 12:
            cout<<"Please enter a x: ";
            cin>>x;
            cout<<"tan("<<x<<")="<<tan(x)<<endl;
            break;
        default:
            break;
        }
        cout<<endl;
        cout<<"1.ceil(x)\n"
            <<"2.cos(x)\n"
            <<"3.exp(x)\n"
            <<"4.fabs(x)\n"
            <<"5.floor(x)\n"
            <<"6.fmod(x,y)\n"
            <<"7.log(x)\n"
            <<"8.log10(x)\n"
            <<"9.pow(x,y)\n"
            <<"10.sin(x)\n"
            <<"11.sqrt(x)\n"
            <<"12.tan(x)\n"
            <<"Please enter the number before what do you want to test(other to exit): ";
        cin>>a;
    }
    return 0;
}
