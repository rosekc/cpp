#include <iostream>
using namespace std;

class Invoice
{
public:
   Invoice ( string a1, string a2, int a3, int a4 )
   {
      setelementNumber ( a1 );
      setelementDescription ( a2 );
      setsalesVolume ( a3 );
      setprice ( a4 );
   }

   void setelementNumber ( string number )
   {
      elementNumber = number;
   }

   string getelementNumber ()
   {
      return elementNumber;
   }

   void setelementDescription ( string input )
   {
      elementDescription = input;
   }

   string getelementDescription ()
   {
      return elementDescription;
   }

   void setsalesVolume ( int number )
   {
      salesVolume = number;
   }

   int getsalesVolume ()
   {
      return salesVolume;
   }

   void setprice ( int number )
   {
      price = number;
   }

   int getprice ()
   {
      return price;
   }

   int getInvoiceAmount ()
   {
      if ( salesVolume < 0 )
      {
         setsalesVolume ( 0 );
      }
      if ( price < 0 )
      {
         setprice ( 0 );
      }
      return salesVolume * price;
   }
private:
   string elementNumber, elementDescription;
   int salesVolume, price;
};

int main()
{
   Invoice i1 ( "001", "book", 10, 5 );


   cout << "elementNumber: " << i1.getelementNumber() << endl;
   cout << "elementDescription:" << i1.getelementDescription() << endl;
   cout << "InvoiceAmount: " << i1.getInvoiceAmount() << endl;
}


