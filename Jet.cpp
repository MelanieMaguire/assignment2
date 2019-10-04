//
// Created by Melanie Maguire on 10/4/19.
//

#include "Jet.h"
#include "ctime"

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return myNumberOfEngines;
}

void Jet::setNumberOfEngines(int numberOfEngines) {
    myNumberOfEngines = numberOfEngines;
}

double Jet::mileageEstimate(double time) {
    double mileage = (rand()%61 + 40) * time;
    if(numberOfEngines > 2 && fuelType == "Rocket")
    	mileage *= 1 + (numberOfEngines * 0.055);
    
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " +
           getNumberOfEngines();
}
