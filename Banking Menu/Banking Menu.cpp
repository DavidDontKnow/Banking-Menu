#include <iostream>
using namespace std;
#include <string>
#include <Windows.h>

int main() {
	float balance = 0;
	float deposit = 0;
	float withdraw = 0;
	char menuOption;
	string name;
	string accountNumber;
	

	cout << "Welcome to the Banking Menu" << endl;
	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Please enter your account number: ";
	getline(cin, accountNumber);
	cout << "Thank you!" << endl;
	cout << "Please wait while we load your account information..." << endl;
	cout << "----------------------------------------------------------------" << endl;
	Sleep(1000);
	

	cout << "Welcome " << name << "!" << endl;
	cout << "Your account number is: " << accountNumber << endl;
	cout << "Your current balance is: " << balance << endl;
	cout << "----------------------------------------------------------------" << endl;
	Sleep(1000);

	do {
		cout << "Please select an option from the menu below: " << endl;
		cout << "D - Deposit" << endl;
		cout << "W - Withdraw" << endl;
		cout << "B - Balance" << endl;
		cout << "Q - Quit" << endl;
		cin >> menuOption;
		cout << "----------------------------------------------------------------" << endl;
		

	
		switch (toupper(menuOption))
		{
		default:
			cout << "Invalid option. Please try again." << endl;
			cout << "----------------------------------------------------------------" << endl;
			break;
		case 'D':
				cout << "Please enter the amount you would like to deposit: ";
				cin >> deposit;

				if (deposit <= 0) {
					cout << "Invalid amount. Please try again." << endl;
				}
				else {
					balance += deposit;
					cout << "Your new balance is: "<< balance << endl;
				}
				cout << "----------------------------------------------------------------" << endl;
				break;
		case 'W':
				cout << "Please enter the amount you would like to withdraw: ";
				cin >> withdraw;
				if (withdraw == 0) {
					cout << "Invalid amount. Please try again." << endl;
				}
				else if (withdraw > balance) {
					cout << "Insufficient funds. Please try again." << endl;
				}
				else {
					balance -= withdraw;
					cout << "Your new balance is: " << balance << endl;
				}
				cout << "----------------------------------------------------------------" << endl;
				break;
		case 'B':
			cout << "Account Information" << endl;
			cout << "Name: " << name << endl;
			cout << "Account Number: " << accountNumber << endl;
			cout << "Balance: " << balance << endl;
			cout << "----------------------------------------------------------------" << endl;
				break;
		case 'Q':
			cout << "Thank you for using the Banking Menu. Goodbye!" << endl;
			break;

		}

	} while (toupper(menuOption) != 'Q');

	return 0;
}