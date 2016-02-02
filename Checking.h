// Courtney Kelly and Katie Schermerhorn
// Checking.h
// Derived class Checking.h, parent: BankAccount.h

#include <iostream>
#include "BankAccount.h"
using namespace std;

class Checking : public BankAccount {
	public:
		// Constructor
			Checking();
		// Member Functions
			void print();
	private: 
		double deposits;
		double withdrawls;
}