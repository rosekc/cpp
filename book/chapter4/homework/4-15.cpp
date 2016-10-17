#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double sale;

  while (1) {
    cout << "Enter sales in dollars(-1 to exit): ";

    cin >> sale;
     if (sale == -1) {
      break;
    }



    cout << "Salary is: $" << setprecision(2) << fixed << 200 +
      0.09 * sale << endl;
  }
}