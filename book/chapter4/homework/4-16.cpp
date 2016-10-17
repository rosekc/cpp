#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int time;
    double salary, rate;

    while (1) {
        cout << "Enter hours worked (-1 to exit): ";
        cin >> time;

        if (time == -1) {
            break;
        }

        cout << "Enter hourly rate of the employee: ";
        cin >> rate;

        if (time <= 40) {
            salary = time * rate;
        } else {
            salary = 40 * rate + 1.5 * rate * (time - 40);
        }

        cout << "Salary is: $" << setprecision (2) <<fixed<<salary<<endl;

    }
}
