#include <iostream>
using namespace std;

int main() {
    int number, largest;

    cout << "Please type a interger: " ;
    cin >> largest;

    for ( int counter = 2 ; counter <= 10; counter++ ) {
        cout << "Please type a interger: " ;
        cin >> number;

        if ( largest < number )
        {
            largest = number;
        }

        }

        cout << "Largest: " << largest << endl;
}
