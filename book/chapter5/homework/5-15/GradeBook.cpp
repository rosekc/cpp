#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook()
{
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}

void GradeBook::inputGrades()
{
    int grade;

    cout << "Enter the letter grade." << endl
        << "Enter the EOF character to end input." << endl;

    while ( ( grade = cin.get() ) != -1 )
    {
        switch ( grade )
        {
        case 'A':
        case 'a':
            aCount ++;
            break;

        case 'B':
        case 'b':
            bCount ++;
            break;

        case 'C':
        case 'c':
            cCount ++;
            break;

        case 'D':
        case 'd':
            dCount ++;
            break;
        case 'F':
        case 'f':
            fCount ++;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            cout << "Incorrect letter grade entered."
                " Enter a new grade." << endl;
            break;
        }
    }
}

void GradeBook::displayGradeReport()
{
    cout << "\n\nNumber of students who received each letter grade: "
        "\nA: " << aCount <<
        "\nB: " << bCount <<
        "\nC: " << cCount <<
        "\nD: " << dCount <<
        "\nf: " << fCount << endl;
}
void GradeBook::displayAverage()
{
   cout << "Average march: " << ( aCount * 5  + bCount * 4 + cCount * 3 + dCount * 2 * fCount )
      / ( aCount + bCount + cCount + dCount + fCount ) << endl;
}
