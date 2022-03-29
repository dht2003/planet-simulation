#include "Entity.hpp"

Entity::Entity(double x,double y,double width,double height,SDL_Texture *texrue)  
: _position(x,y), _width(width),_height(height), _texture(texrue){
    _currentFrame.x = 0;
    _currentFrame.y = 0;
    _currentFrame.w = width;
    _currentFrame.h = height;
}

double Entity::getX() const{ return _position.getX(); }

double Entity::getY() const{ return _position.getY(); }

vector2d<double> Entity::getPosition() const {return _position; }

double Entity::getWidth()  const {return _width;}

double Entity::getHeight() const {return _height;}

SDL_Rect Entity::getCurrentFrame() const {return _currentFrame;}

SDL_Texture *Entity::getTexture()  const {return _texture; }

void Entity::setX(double x) { _position.setX(x); }

void Entity::setY(double y) {_position.setY(y); }

void Entity::move(double x, double y) {
    vector2d<double> distance(x,y);
    _position += distance;
}

void Entity::setPosition(double x,double y) {
    _position.setX(x);
    _position.setY(y);
}

void Entity::setWidth(double width) {_width = width;}

void Entity::setHeight(double height) {_height = height; _currentFrame.h = height;}