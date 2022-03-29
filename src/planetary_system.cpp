#include "planetary_system.hpp"

PlanetarySystem::PlanetarySystem(const char *title,unsigned int width,unsigned int height) 
: RenderWindow(title,width,height) {}

void PlanetarySystem::add_planet(planet p) {
    _planets.push_back(p);
}

planet PlanetarySystem::getPlanet(unsigned int index) {
    if (index >= _planets.size()) 
        throw std::invalid_argument("[Error] Index out of planets list");
    return _planets[index];
}

void PlanetarySystem::renderSystem() {
    for (planet p: _planets)
        render(p);
}

void PlanetarySystem::updateSystem() {
    if (_planets.empty()) return;
    for (std::size_t i = 0; i < _planets.size(); i++) {
        planet planet1 = getPlanet(i);
        double sumForceX = 0;
        double sumForceY = 0;
        for (std::size_t j = 0; j < _planets.size(); j++) {
            if (j == i) continue;
            planet planet2 = getPlanet(j);
            sumForceX += orbital_math::GForceX(planet1,planet2);
            sumForceY += orbital_math::GForceY(planet1,planet2);
        }
        vector2d<double> planet_velocity;
        planet_velocity.setX(orbital_math::planetVelocity(planet1,sumForceX,orbital_math::TIMESSTAMP));
        planet_velocity.setY(orbital_math::planetVelocity(planet1,sumForceY,orbital_math::TIMESSTAMP));
        planet1.addVelocity(planet_velocity);
    }
}