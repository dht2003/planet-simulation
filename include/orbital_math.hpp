#pragma once

#include "planet.hpp"
#include <cmath>

namespace orbital_math {
    const double G = 6.6742E-11;

    const double AU = 1.495978707E11; 

    const double TIMESSTAMP = 3600 * 24;

    const double SCALE = 250 / AU;

    double distance(planet plant1, planet plant2);

    double theta(planet plant1, planet plant2);

    double GForce(planet plant1, planet plant2);

    double GForceX(planet plant1, planet plant2);

    double GForceY(planet plant1, planet plant2);

    double planetVelocity(planet p , double gForce,double timestamp);

}