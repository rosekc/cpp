#include <iostream>
#include "GradeBook.h"
#define EOF -1
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

    while ( ( grade = cin.get() ) != EOF )
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

void GradeBook::displayAverageGrade()
{
    cout << "Average: " << ( aCount * 4 +bCount *3 + cCount + 2 + dCount * 1 ) /
    ( aCount + bCount + cCount + dCount + fCount ) << endl;
}
