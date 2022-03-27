#include "planet.hpp"

int planet::getX() const { return _position.getX(); }

int planet::getY() const {return _position.getY(); }

vector2d<int> planet::getPosition()  {return _position; }

void planet::setX(int x) { _position.setX(x); }

void planet::setY(int y) {_position.setY(y); }

float planet::getRadius() { return _radius; }

float planet::getMass() const {return _mass; }

float planet::getXVel() const {return _velocity.getX(); }

float planet::getYVel() const {return _velocity.getY(); }

void planet::setXVel(float xVel) { _velocity.setX(xVel) ; }

void planet::setYVel(float yVel) { _velocity.setY(yVel); }

void planet::addVelocity(vector2d<float> velocity) { _velocity = _velocity + velocity; }

SDL_Color planet::getPlanetColor() {return _color; }

void planet::setPlanetColor(SDL_Color color) {_color = color; }

