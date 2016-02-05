// Courtney Kelly and Katie Schermerhorn
// TwoDayPackage.h
// Derived class TwoDayPackage

#include <iostream>
#include "Package.h"
using namespace std;

class TwoDayPackage : public Package {
	public:
		//Constructor
		TwoDayPackage();
		// Member Functions
		double CalculateCost();  //Calculates cost to ship package with flat fee added

	private:
		double flatFee; //flat fee for expedited delivery

};
