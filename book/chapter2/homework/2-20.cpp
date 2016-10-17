#include <iostream>
using namespace std;

int main()
{
    const double pai = 3.14159;
    int r;

    cout << "r=";
    cin >> r;

    cout << "C=" << 2 * pai * r << "\nd=" << 2 * r
        << "\ns=" << pai * r * r << endl;

}
