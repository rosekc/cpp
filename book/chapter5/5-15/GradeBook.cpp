#include<iostream>
#include"GradeBook.h"
#define EOF -1
using namespace std;
GradeBook::GradeBook(string cname,string tname)
{
    setCourseName(cname);
    setTeacherName(tname);
    aCount=0;
    bCount=0;
    cCount=0;
    dCount=0;
    fCount=0;
}
void GradeBook::setCourseName(string name)
{
    courseName=name;
}
string GradeBook::getCourseName()
{
    return courseName;
}
void GradeBook::setTeacherName(string name)
{
    teacherName=name;
}
string GradeBook::getTeacherName()
{
    return teacherName;
}
void GradeBook::displayMessage()
{
    cout<<"Welcome to the grade book for: "<<getCourseName()<<"!"<<endl;
    cout<<"This course is presented by: "<<getTeacherName()<<"!"<<endl;
}
void GradeBook::inputGrades()
{
    int grade;
    cout<<"Enter the letter grades."<<endl
        <<"Enter the EOF character to end input."<<endl;
    while((grade=cin.get())!=EOF)
    {
        switch(grade)
        {
        case 'A':
        case 'a':
            aCount++;
            break;
        case 'B':
        case 'b':
            bCount++;
            break;
        case 'C':
        case 'c':
            cCount++;
            break;
        case 'D':
        case 'd':
            dCount++;
            break;
        case 'F':
        case 'f':
            fCount++;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;
        default:
            cout<<"Incorrect letter grade entered."
                <<"Enter a new grade."<<endl;
            break;
        }
    }
}
void GradeBook::displayGradeReport()
{
    double a=0;
    a=(aCount*4+bCount*3+cCount*2+dCount*1)/(aCount+bCount+cCount+dCount+fCount);
    cout<<"\n\nThe average grade is: "<<a
        <<endl;
}
