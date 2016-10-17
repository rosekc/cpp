#include <iostream>
#include <sstream>
using namespace std;

class HealthProfile
{
public:
    HealthProfile ( string a0, string sex,int a1, int a2, int a3, double a4, double a5 )
    {
        setname ( a0 );
        setsex ( sex );
        sety ( a1 );
        setm ( a2 );
        setd ( a3 );
        setheight( a4 );
        setweight( a5 );


        cout << "Date today: (yyyy mm dd) ";
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

    void setsex( string arg )
    {
        sex = arg;
    }

    string getsex()
    {
        return sex;
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

    void setheight( double arg )
    {
        height = arg;
    }

    double getheight ()
    {
        return height;
    }

    void setweight( double arg )
    {
        weight = arg;
    }

    double getweight()
    {
        return weight;
    }

    void displayDate ()
    {
        cout << gety() << "/" << getm() << "/" << getd() << endl;
    }

    double getBMI ()
    {
        return weight / height / height;
    }
    string getBMIResult()
    {
        double bmi = getBMI ();
        string result;

        if ( bmi < 18.5 )
        {
            result = "Underweight";
        }
        else if ( bmi >= 18.5 && bmi < 25 )
        {
            result = "Normal";
        }
        else if ( bmi >= 25 && 29.9 )
        {
            result = "Overweight";
        }
        else
        {
            result = "Obese";
        }

        return result;
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
    string name, sex;
    int y, m, d;
    int y1, m1, d1, age;
    double weight, height;
};

int main()
{
    string name, sex;
    int y, m, d;
    double weight, height;

    cout << "Welcome to HealthProfile\nName: ";

    getline( cin, name );

    cout << "Sex: ";

         cin >> sex;

    cout << "Date of birth: (yyyy mm dd) ";

         cin >> y >> m >> d;

    cout << "Weight(kg) and height(m): ";

         cin >> weight >> height;

    HealthProfile h1( name, sex, y, m, d, height, weight );

    cout << "Name: " << h1.getname() << endl;
    cout << "Sex: " << h1.getsex() << endl;
    cout << "Date of birth: " ;
    h1.displayDate();
    cout << "Age: " << h1.getAge() << endl;
    cout << "Height: " << h1.getheight() << "cm" << endl;
    cout << "Weiight: " << h1.getweight() << "kg" << endl;
    cout << "BMI: " << h1.getBMI() << " Result: " << h1.getBMIResult() << endl;
    cout << "MaxiumunHeartRate: " << h1.getMaxiumunHeartRate() << endl;;
    cout << "TargetHeartRate: " << h1.getTargetHeartRate() << endl;
}
