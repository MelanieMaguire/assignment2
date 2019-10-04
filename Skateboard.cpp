//
// Created by Melanie Maguire on 10/4/19.
//

#include "Skateboard.h"
#include <ctime>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    double mileage = (rand() % 41 - 10)/100 * time;
    if(time > 25 && time < 250)
	mileage += rand() % (mileage / 3 + 1) - 1
    return mileage;
}

string Bicycle::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
