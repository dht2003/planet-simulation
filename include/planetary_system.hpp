#pragma once 

#include <cmath>
#include <vector>
#include "planet.hpp"
#include "orbital_math.hpp"

class PlanetarySystem {
    private:
        std::vector<planet> _planets;
    
    public: 
        void add_planet(planet p);
        planet getPlanet(unsiged int index);
        void updateSystem();
}