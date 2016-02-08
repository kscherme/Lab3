// Courtney Kelly and Katie Schermerhorn
// Credit.cpp

#include <iostream>
#include "BankAccount.h"
#include "Credit.h"
using namespace std;

// Constructors
Credit::Credit() {
		charge = 0;
		chargeLocation = "Notre Dame Bookstore";
	}

// Member Functions
	void Credit::print() {

		creditAccount.print();
		cout << "You charged: $" << charge << endl;
		cout << "This charge was made at: " << chargeLocation << "\n" << endl;

	}
