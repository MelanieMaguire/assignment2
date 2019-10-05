//
// Created by Melanie Maguire on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_MOTORCYCLE_H
#define DRIVINGSIMULATOR_MOTORCYCLE_H

#include "PoweredVehicle.h"

class Motorcycle : public PoweredVehicle {	// changed everything from car to motorcycle

private:
    string myEngineSize;

public:
    Motorcycle();

    explicit Motorcycle(string brand, string model, string fuelType,
                 string engineSize);

    virtual ~Motorcycle();
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_MOTORCYCLE_H
