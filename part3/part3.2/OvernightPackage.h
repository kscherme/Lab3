// Courtney Kelly and Katie Schermerhorn
// Overnight.h
// Derived class OvernightPackage.h

#include <iostream>
#include "Package.h"
using namespace std;

class OvernightPackage : public Package {
	public:
		//Constructor
			OvernightPackage();
		// Member Functions
			virtual double CalculateCost();

	private:
		double extraCostPerOunce; //Extra cost per ounce for overnight shipping
};
