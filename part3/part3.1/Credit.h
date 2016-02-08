// Courtney Kelly and Katie Schermerhorn
// Credit.h
// Derived class Credit.h, parent: BankAccount.h

#include <iostream>
#include "BankAccount.h"
using namespace std;

class Credit {
	public:
        Credit();
		void print();
	private:
		BankAccount creditAccount;
		double charge;
		string chargeLocation;
};
