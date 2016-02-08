// Courtney Kelly and Katie Schermerhorn
// main.cpp

#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main() {

	// Array of Base-class pointers
		Package * deliveries[6];

	// Initialize 3 TwoDayPackage, and 3 OvernightPackage
		TwoDayPackage pack1, pack2, pack3;
		OvernightPackage pack4, pack5, pack6;

	// Aim Base Class Pointers at Derived Class Objects
		deliveries[0] = &pack1;
		deliveries[1] = &pack2;
		deliveries[2] = &pack3;
		deliveries[3] = &pack4;
		deliveries[4] = &pack5;
		deliveries[5] = &pack6;

	// Compute Total Cost of shipping 6 instantiated packages
		double totalCost = 0;
		for (int i=0; i<6; i++) {
			totalCost += deliveries[i]->CalculateCost();
		}

	// Print Results 
		cout << "Total Cost of Today's Deliveries: " << totalCost << endl;
	
	return 0;
}
