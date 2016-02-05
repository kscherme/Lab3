// Courtney Kelly and Katie Schermerhorn
// OvernightPackage.cpp

#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
using namespace std;

// Constructor
OvernightPackage::OvernightPackage() : Package() {
			extraCostPerOunce = 3.0;
	}

// Member Functions
	double OvernightPackage::CalculateCost() {
		double preCost; //Cost before fee is added
		double weight;  // weight of the package
        	double postCost; //Cost after fee is added

        	preCost = Package::CalculateCost();
		weight = Package::getpackWeight();
        	postCost = preCost + extraCostPerOunce * weight;

        	return postCost;
}
