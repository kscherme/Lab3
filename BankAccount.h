// Courtney Kelly and Katie Schermerhorn
// BankAccount.h
// Parent class BankAccount

#include <iostream>
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
using namespace std;

class BankAccount {
	public:
		// Constructors
			BankAccount(); 			// default
		// Member Functions
	private:
		string accountNumber;
		string name;
		double balance;
};

#endif
