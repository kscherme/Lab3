// Courtney Kelly and Katie Schermerhorn
// Package.cpp

#include <iostream>
#include "Package.h"
using namespace std;

// Constructors
	Package::Package() {
		name = "Courtney";
		zipcode = "66221";
		packWeight = 13.2;
		shipCost = 1.20;

		//ensure that packWeight and shipCost are non-negative
		if(packWeight < 0 ){
			cout << "The weight of the package cannot be negative." << endl;
		}
		else if(shipCost < 0){
			cout << "The cost per ounce to ship cannot be negative." << endl;
		}
	}

// Public Member Functions

// Calculates the cost to ship a package
	double Package::CalculateCost() {
		double cost; //Cost to ship package

		cost = packWeight * shipCost;

		return cost;
	}

// Returns weight of package
	double Package::getpackWeight() {
		return packWeight;
}
