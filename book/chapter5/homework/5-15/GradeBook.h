#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED
#include <string>
using namespace std;

class GradeBook
{
public:
    GradeBook ();
    void inputGrades();
    void displayGradeReport();
    void displayAverage();
private:
    int aCount;
    int bCount;
    int cCount;
    int dCount;
    int fCount;
};

#endif // GRADEBOOK_H_INCLUDED
