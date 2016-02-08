// Courtney Kelly and Katie Schermerhorn
// Checking.h
// Derived class Checking.h, parent: BankAccount.h

#include <iostream>
#include "BankAccount.h"
using namespace std;

class Checking {
	public:
		// Constructor
			Checking();
		// Member Functions
			void print();
	private: 
		BankAccount checkAccount;
		double deposits;
		double withdrawls;
};
