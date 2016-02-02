// Courtney Kelly and Katie Schermerhorn
// Credit.h
// Derived class Credit.h, parent: BankAccount.h

#include <iostream>
#include "BankAccount.h"
using namespace std;

class Credit : public BankAccount {
	public:
		void print();
	private:
		double charge;
		string chargeLocation;
}