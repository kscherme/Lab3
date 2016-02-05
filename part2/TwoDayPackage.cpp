// Courtney Kelly and Katie Schermerhorn
// TwoDayPackage.cpp

#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std;

// Constructor
TwoDayPackage::TwoDayPackage() : Package() {
		flatFee = 2.0;
	}

// Member Functions
double TwoDayPackage::CalculateCost() {

	double preCost; //Cost before fee is added
	double postCost; //Cost after fee is added

	preCost = Package::CalculateCost();
	postCost = preCost + flatFee;

	return postCost;
}

