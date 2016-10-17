#include <iostream>
#include <sstream>
using namespace std;

class Heartrates
{
public:
    Heartrates ( string a0, int a1, int a2, int a3 )
    {
        setname ( a0 );
        sety ( a1 );
        setm ( a2 );
        setd ( a3 );


        cout << "Date: (yyyy, mm, dd) ";
        cin >> y1 >> m1 >> d1;
    }

    void setname ( string arg )
    {
        name = arg;
    }

    string getname ()
    {
        return name;
    }

    void sety ( int arg )
    {
        y = arg;
    }

    int gety ()
    {
        return y;
    }

    void setm ( int arg )
    {
        if ( arg < 1 || arg > 12 )
        {
            m = 1;
        }
        else
        {
            m = arg;
        }
    }

    int getm ()
    {
        return m;
    }

    void setd ( int arg )
    {
        d = arg;
    }

    int getd ()
    {
        return d;
    }

    void displayDate ()
    {
        cout << gety() << "/" << getm() << "/" << getd() << endl;
    }

    int getAge ()
    {


        age = ( -- y1 ) - gety();

        if ( m1 >= getm()  )
        {
            if ( d1 >= getd())
            {
               age --;
            }
        }

        return age;
    }

    int getMaxiumunHeartRate()
    {
        return 220 - getAge();
    }

    string getTargetHeartRate()
    {
        stringstream stream;
        string str;
        stream << "From " << 0.50 * getMaxiumunHeartRate() << " to " << 0.85 * getMaxiumunHeartRate();

        getline(stream, str);
        return str;
    }

private:
    string name;
    int y, m, d;
    int y1, m1, d1, age;
};

int main()
{
   Heartrates h1( "Silly Bi", 1998, 05, 26 );
   Heartrates h2( "Isabella Li", 1996, 12, 4 );

   cout << "Name: " << h1.getname() << endl;
   cout << "Age: " << h1.getAge() << endl;
   cout << "MaxiumunHeartRate: " << h1.getMaxiumunHeartRate() << endl;;
   cout << "TargetHeartRate: " << h1.getTargetHeartRate() << endl;

   cout << "Name: " << h2.getname() << endl;
   cout << "Age: " << h2.getAge() << endl;
   cout << "MaxiumunHeartRate: " << h2.getMaxiumunHeartRate() << endl;;
   cout << "TargetHeartRate: " << h2.getTargetHeartRate() << endl;
}
