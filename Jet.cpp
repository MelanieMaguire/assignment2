//
// Created by Melanie Maguire on 10/4/19.
//

#include "Jet.h"
#include "ctime"

Jet::Jet(string brand, string model, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setnumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return myNumberOfEngines;
}

void Jet::setNumberOfEngines(int numberOfEngines) {
    myNumberOfEngines = numberOfEngines;
}

double Jet::mileageEstimate(double time, int numberOfEngines) {
    if(numberOfEngines > 2)
    	double mileage = (rand()%61 + 40) * time * 1 + (numberOfEngines * 0.055);
    else
    	double mileage = (rand()%61 + 40) * time;
}
