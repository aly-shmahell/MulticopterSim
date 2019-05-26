/*
 * Physical constants and factory method for a large (1.2m, 16kg) quadcopter
 *
 * Copyright (C) 2019 Simon D. Levy
 *
 * MIT License
 */

#include "QuadXAPDynamics.hpp"

class BigQuadDynamics : public QuadXAPDynamics {

    protected:

        // Calculated
        const double b(void)  override  { return 0.0000530216718361085; }
        const double d(void)  override  { return 2.23656692806239E-06; }
        const double m(void)  override  { return 16.47; }       // kg
        const double l(void)  override  { return 0.6; }         // m
        const double Ix(void) override  { return 2; }
        const double Iy(void) override  { return 2; }
        const double Iz(void) override  { return 3; }
        const double Jr(void) override  { return 0.000308013; } // Kg*m^2

        // Estimated
        const unsigned int maxrpm(void) override { return 10000; }
};

// Factory method
MultirotorDynamics * MultirotorDynamics::create(void)
{
    return new BigQuadDynamics();
}
