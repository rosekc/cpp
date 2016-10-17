#include <iostream>
using namespace std;

class Employee
{
public:
    Employee ( string a1, string a2, double a3 )
    {
        setname( a1 );
        setsurmane( a2 );
        setsalary( a3 );
    }
    void setname( string arg )
    {
        name = arg;
    }

    string getname()
    {
        return name;
    }

    void setsurmane ( string arg )
    {
        surname = arg;
    }

    string getsurname ()
    {
        return surname;
    }

    void setsalary ( double arg )
    {
        if ( arg < 0 )
        {
            salary = 0;
        }
        else
        {
            salary = arg;
        }
    }

    double getsalary ()
    {
       return salary;
    }

private:
    string name, surname;
    double salary;
};

int main ()
{
    Employee e1( "Doctor", "Chan", 5000 );
    Employee e2( "Silly", "Bi", 10000 );

    cout << "name: " << e1.getname() << " " << e1.getsurname() << endl;
    cout << "salary: " << e1.getsalary() << endl;

    cout << "name: " << e2.getname() << " " << e2.getsurname() << endl;
    cout << "salary: " << e2.getsalary() << endl;

    e1.setsalary( e1.getsalary() * 1.1 );
    e2.setsalary( e2.getsalary() * 1.1 );

    cout << "After salary +10%" << endl;

    cout << "name: " << e1.getname() << " " << e1.getsurname() << endl;
    cout << "salary: " << e1.getsalary() << endl;

    cout << "name: " << e2.getname() << " " << e2.getsurname() << endl;
    cout << "salary: " << e2.getsalary() << endl;


}
