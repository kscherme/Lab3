// Courtney Kelly and Katie Schermerhorn
// main.cpp

#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main() {

	TwoDayPackage pack1;
	OvernightPackage pack2;

	cout << pack1.CalculateCost() << endl;
	cout << pack2.CalculateCost() << endl;
	
	return 0;
}
