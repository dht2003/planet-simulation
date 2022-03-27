#pragma once 

#include <cmath>
#include <vector>
#include <stdexcept>
#include <cstddef>
#include "planet.hpp"
#include "orbital_math.hpp"
#include "vector2d.hpp"

class PlanetarySystem {
    private:
        std::vector<planet> _planets;
    
    public: 
        void add_planet(planet p);
        planet getPlanet(unsigned int index);
        void updateSystem();
};