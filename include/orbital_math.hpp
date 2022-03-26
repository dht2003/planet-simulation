#pragma once

#include "planet.hpp"
#include <cmath>

namespace orbital_math {
    const double G = 6.6742E-11;

    const double AU = 1.495978707E11; // TODO

    float distance(planet plant1, planet plant2);

    float theta(planet plant1, planet plant2);

    float GForce(planet plant1, planet plant2);

    float GForceX(planet plant1, planet plant2);

    float GForceY(planet plant1, planet plant2);

    float planetVelocity(planet p , float gForce,float timestamp);

}