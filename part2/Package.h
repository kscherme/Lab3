// Courtney Kelly and Katie Schermerhorn
// Package.h
// Base class Package

#include <iostream>
#ifndef PACKAGE_H
#define PACKAGE_H
using namespace std;

class Package {
	public:
		// Constructors
			Package();		// default
		// Member Functions
			double CalculateCost(); // calculates the cost to ship a package
			double getpackWeight(); //returns weight of package	
	private:
		string name;
		string zipcode;
		double packWeight; //weight of the package
		double shipCost;   //cost per ounce to ship the package

};

#endif
