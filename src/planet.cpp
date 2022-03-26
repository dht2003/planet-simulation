#include "planet.hpp"

int planet::getX() { return _position.first; }

int planet::getY() {return _position.second; }

std::pair<int,int> planet::getPosition()  {return _position; }

void planet::setX(int x) { _position.first = x; }

void planet::setY(int y) {_position.second = y; }

float planet::getRadius() { return _radius; }

float planet::getMass() {return _mass; }

float planet::getXVel() {return _xVelocity; }

float planet::getYVel() {return _yVelocity; }

void planet::setXVel(float xVel) { _xVelocity = xVel; }

void planet::setYVel(float yVel) { _yVelocity = yVel; }

SDL_Color planet::getPlanetColor() {return _color; }

void planet::setPlanetColor(SDL_Color color) {_color = color; }

