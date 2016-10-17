#include <iostream>
using namespace std;

int main() {
    int d;

    cout << "d=" ;
    cin >> d;

    for ( int i = 1; i <= d; i++ ) {
        cout << "*";
    }

    cout << "\n";

    for (int i = 1; i <= ( d - 2 ); i++ ) {
        cout << "*";
        for ( int c = 1; c <= ( d - 2 ); c++ ) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for ( int i = 1; i <= d; i++ ) {
        cout << "*";
    }
}
