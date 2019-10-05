//
// Created by Melanie Maguire on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_JET_H		// everything else just changed from car
#define DRIVINGSIMULATOR_JET_H		// to jet

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int myNumberOfEngines;		// int instead of string (num engines)

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numberOfEngines);

    virtual ~Jet();
    string getNumberOfEngines();
    void setNumberOfEngines(int myNumberOfEngines);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
