//
// Created by Melanie Maguire on 10/4/19.
//

#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);		// no gear because skateboards don't have gears
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    double mileage = (rand() % 41 - 10)/100 * time;		// mileage between 0.1 and 0.5
    if(time > 25 && time < 250)
    {					// 25 < time < 250 
	int Rand = rand() % (int)((1 / 3 * time) - 1) + 1;	// add from 1 to 1/3 mileage time
        mileage += Rand;
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
