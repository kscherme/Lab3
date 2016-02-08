// Courtney Kelly and Katie Schermerhorn
// BankAccount.cpp

#include <iostream>
#include "BankAccount.h"


// Constructors
	BankAccount::BankAccount() {
		accountNumber = "2939384032";
		name = "Leonard's Funds";
		balance = 20.50;
	}

// Member Functions
	void BankAccount::print() {
		cout << "\nName: " << name << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Balance: " << balance << endl;
	}
