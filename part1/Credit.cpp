// Courtney Kelly and Katie Schermerhorn
// Credit.cpp

#include <iostream>
#include "BankAccount.h"
#include "Credit.h"
using namespace std;

// Default Constructor
Credit::Credit() : BankAccount() {
		charge = 0;
		chargeLocation = "Empty";
	}

// Member Functions
	void Credit::print() {

		cout << "You charged: $" << charge << endl;
		cout << "This charge was made at: " << chargeLocation << endl;

	}
