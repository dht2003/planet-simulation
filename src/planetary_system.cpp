#include "planetary_system.hpp"

void PlanetarySystem::add_planet(planet p) {
    _planets.push_back(p);
}

planet PlanetarySystem::getPlanet(unsiged int index) {
    if (index >= _planets.size()) 
        throw std::invalid_argument("[Error] Index out of planets list")
}

void PlanetarySystem::updateSystem() {
    if (_planets.empty()) return;
    for (int i = 0; i < _planets.size(); i++) {
        planet planet1 = getPlanet(i);
        float sumGforceX = 0;
        float sumGforceY = 0;
        for (int j = 0; j < _planets.size(); j++) {
            if (j == i) continue;
            planet planet2 = getPlanet(j);
            sumGforceX += orbital_math::GForceX(planet1,planet2);
            sumGforceY += orbital_math::GForceY(planet1,planet2);
        }
        planet1.addXVVel(orbital_math::planetVelocity(planet1,sumGforceX,orbital_math::TIMESSTAMP));
        planet1.addYVVel(orbital_math::planetVelocity(planet1,sumGforceY,orbital_math::TIMESSTAMP));
    }
}