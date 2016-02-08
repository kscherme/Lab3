#include <iostream>
#include "BankAccount.h"
#include "Checking.h"
#include "Credit.h"
using namespace std;

int main() {

	Checking pirate1;
	pirate1.print();

	Credit pirate2;
	pirate2.print();

	return 0;
}
