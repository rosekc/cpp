#include <iostream>
using namespace std;

int main() {
    int number, largest, largest1;

    cout << "Please type a interger: " ;
    cin >> largest;

    cout << "Please type a interger: " ;
    cin >> number;

     if ( largest < number )
        {
            largest1 = largest;
            largest = number;
        }
     else
        {
            largest1 = number;
        }

    for ( int counter = 3 ; counter <= 10; counter++ ) {
        cout << "Please type a interger: " ;
        cin >> number;

        if ( largest < number )
        {
            largest1 = largest;
            largest = number;

        }



        }

        cout << "Largest: " << largest << " and " << largest1 << endl;
}
