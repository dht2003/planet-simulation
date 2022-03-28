#include "planet.hpp"

planet::planet(int x,int y,float radius,float mass,SDL_Texture *texture) 
:  Entity(x,y,radius,radius,texture), _mass(mass) {
    _velocity.setX(0);
    _velocity.setY(0);
}

float planet::getRadius() { return _radius; }

float planet::getMass() const {return _mass; }

float planet::getXVel() const {return _velocity.getX(); }

float planet::getYVel() const {return _velocity.getY(); }

void planet::setXVel(float xVel) { _velocity.setX(xVel) ; }

void planet::setYVel(float yVel) { _velocity.setY(yVel); }

void planet::addVelocity(vector2d<float> velocity) { _velocity = _velocity + velocity; }


