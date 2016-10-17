#include <iostream>
#include"GradeBook.h"
using namespace std;

int main()
{
    GradeBook gradebook1("C++","Mr.Wang");
    gradebook1.displayMessage();
    gradebook1.inputGrades();
    gradebook1.displayGradeReport();
    return 0;
}
