#include <iostream>
#include "GradeBook.h"

using namespace std;

int main()
{
    GradeBook gradebook1( "class one" );
    GradeBook gradebook2( "class two" );

    cout << gradebook1.getCourseName() << gradebook2.getCourseName();
}
