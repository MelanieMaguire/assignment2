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

double Jet::mileageEstimate(double time) {
    double mileage = (rand()%61 + 40) * time;
}
