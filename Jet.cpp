//
// Created by Melanie Maguire on 10/4/19.
//

#include "Jet.h"				// everything set to jet instead of car

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);	//set number of engines
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return myNumberOfEngines;
}

void Jet::setNumberOfEngines(int numberOfEngines) {
    numEngines = numberOfEngines;
}

double Jet::mileageEstimate(double time) {
    double mileage = (rand()%61 + 40) * time;		// mileage between 40 and 100
    if(myNumberOfEngines > 2 && fuelType == "Rocket")	// if rocket
    	mileage += mileage * myNumberOfEngines * 0.055;	// multiply mileage with num engines 
							// and percent increase
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " +
           numEngines;
}
