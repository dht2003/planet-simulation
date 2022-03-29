#include "orbital_math.hpp"

double orbital_math::distance(planet plant1, planet plant2) {
    return std::sqrt(std::pow(plant2.getX() - plant1.getX(),2) + std::pow(plant2.getY() - plant1.getY(),2));
}

double orbital_math::theta(planet plant1, planet plant2){
    return std::atan((plant2.getY() - plant1.getY()) / (plant2.getX() - plant1.getX()));
}

double orbital_math::GForce(planet plant1, planet plant2) {
    return G * plant1.getMass() * plant2.getMass() / std::pow(distance(plant1,plant2),2);
}

double orbital_math::GForceX(planet plant1, planet plant2) {
    return  GForce(plant1,plant2) * std::cos(theta(plant1,plant2));
}


double orbital_math::GForceY(planet plant1, planet plant2) {
    return  GForce(plant1,plant2) * std::sin(theta(plant1,plant2));
}

// TODO : Correct this equation 
double orbital_math::planetVelocity(planet p , double gForce,double timestamp) {
    return gForce * timestamp / p.getMass();
}
