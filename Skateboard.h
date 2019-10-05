//
// Created by Melanie Maguire on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {	// changed everything to skateboard from bicycle
						
public:
    explicit Skateboard(string brand, string model);	// got rid of gears

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);	// no get/set

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
