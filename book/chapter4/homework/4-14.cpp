#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double bBalance, tCharge, tCredit, cLimit;
	double nBalance;
	int acc;
	
	while (1){
		cout<<"Enter account number(-1 to exit): ";
		cin >> acc;
		
		if (acc == -1){
			break;
			}
		
		cout << "Enter begining balance: ";
		cin >> bBalance;
		
		cout << "Enter total charges: ";
		cin >> tCharge;
		
		cout << "Enter total credit: " ;
		cin >> tCredit;
		
		cout << "Enter credit limit: " ;
		cin >> cLimit;
		
		nBalance = bBalance + tCharge - tCredit;
		
		cout << "New balance is "<< setprecision (2) << fixed << nBalance<<endl;
		
		if (nBalance > cLimit)
		{
			cout<<"Account:\t" << acc<<endl;
			cout<<"Credit limit:\t" << setprecision (2) << fixed << cLimit << endl;
			cout << "Balance:\t"<< setprecision (2) << fixed << nBalance<<endl;
			cout << "Credit limit exceeded"<<endl;
			}
			
			
		}
	}