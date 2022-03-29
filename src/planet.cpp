#include "planet.hpp"

planet::planet(double x,double y,double radius,double mass,SDL_Texture *texture) 
:  Entity(x,y,radius,radius,texture), _mass(mass) {
    _velocity.setX(0);
    _velocity.setY(0);
}

double planet::getRadius() { return _radius; }

double planet::getMass() const {return _mass; }

double planet::getXVel() const {return _velocity.getX(); }

double planet::getYVel() const {return _velocity.getY(); }

vector2d<double> planet::getVel() const {return _velocity; }

void planet::setXVel(double xVel) { _velocity.setX(xVel) ; }

void planet::setYVel(double yVel) { _velocity.setY(yVel); }

void planet::addVelocity(vector2d<double> velocity) { _velocity += velocity; }

void planet::update(double time) {
    move(_velocity.getX() * time, _velocity.getY() * time);
}