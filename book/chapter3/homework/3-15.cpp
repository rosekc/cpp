#include <iostream>
using namespace std;

class Date
{
public:
   Date ( int a1, int a2, int a3 )
   {
      sety ( a1 );
      setm ( a2 );
      setd ( a3 );
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

   void displayDate ()
   {
      cout << gety() << "/" << getm() << "/" << getd() << endl;
   }
private:
   int y, m, d;
};

int main ()
{
   Date d1 ( 2016, 3, 20 );
   d1.displayDate();

   Date d2 ( 2016, 123, 26 );
   d2.displayDate();
}



