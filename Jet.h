//
// Created by Melanie Maguire on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int myNumberOfEngines;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 string numberOfEngines);

    virtual ~Jet();
    string getNumberOfEngines();
    void setNumberOfEngines(string myNumberOfEngines);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
