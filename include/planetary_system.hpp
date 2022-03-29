#pragma once 

#include <cmath>
#include <vector>
#include <stdexcept>
#include <cstddef>
#include "planet.hpp"
#include "orbital_math.hpp"
#include "RenderWindow.hpp"
#include "vector2d.hpp"

class PlanetarySystem : public RenderWindow {
    private:
        std::vector<planet> _planets;
    public: 
        PlanetarySystem(const char *title,unsigned int width,unsigned int height);
        void renderSystem();
        void add_planet(planet p);
        planet getPlanet(unsigned int index);
        void updateSystem();
};