#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook( string name )
{
    setCourseName( name );
}

void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 )
        courseName =name;
    else
    {
        courseName =name.substr( 0, 25 );
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
            <<"Limiting courseName yo first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

void GradeBook::determineClassAverage()

{
    int total = 0;
    int grade = 0;
    int gradeCounter = 0;
    double average;

    do
    {
           total += grade;
           cout << "Enter the grade or -1 to quit: ";
           cin >> grade;
           gradeCounter ++;
    }
    while ( grade != -1 );

    total += grade;

    if ( gradeCounter != 0 )
    {
        average = static_cast< double >( total ) / gradeCounter;
        cout << "\nTotal of all " << gradeCounter<< " grades entered is "
            << total << endl;
        cout << "Class average is " << setprecision( 2 ) << fixed << average
            << endl;
    }
    else
        cout << "No grades were entered" << endl;
}
