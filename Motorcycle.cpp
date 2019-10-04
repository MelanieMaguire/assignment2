//
// Created by Melanie Maguire on 10/4/19.
//

#include "Motorcycle.h"

Motorcycle::Motorcycle() {
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

double Car::mileageEstimate(double time) {
    double mileage = 10 * time;
    if (fuelType == "super") {
        mileage += mileage * 0.065;
    }
    return mileage;
}

string Car::toString() {
    return "-> Motorcycle\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}
