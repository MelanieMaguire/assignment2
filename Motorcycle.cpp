//
// Created by Melanie Maguire on 10/4/19.
//

#include "Motorcycle.h"

Motorcycle::Motorcycle() {	// changed everything to motorcycle (very similar to car)
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("CoolKidModel");
}

Motorcycle::Motorcycle(string brand, string model, string fuelType, string engineSize) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Motorcycle::~Motorcycle() = default;

string Motorcycle::getEngineSize() {
    return myEngineSize;
}

void Motorcycle::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Motorcycle::mileageEstimate(double time) {
    double mileage = 10 * time;			// mileage is 10min
    if (fuelType == "super") {			// if super fuel type
        mileage += mileage * 0.065;		// increase by 6.5%
    }
    return mileage;
}

string Motorcycle::toString() {
    return "-> Motorcycle\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}
