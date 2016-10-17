#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED
using namespace std;
class GradeBook
{
public:
    GradeBook(string,string);
    void setCourseName(string);
    string getCourseName();
    void setTeacherName(string);
    string getTeacherName();
    void displayMessage();
    void inputGrades();
    void displayGradeReport();
private:
    string courseName;
    string teacherName;
    int aCount;
    int bCount;
    int cCount;
    int dCount;
    int fCount;
};


#endif // GRADEBOOK_H_INCLUDED
