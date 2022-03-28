#include "Entity.hpp"

Entity::Entity(int x,int y,int width,int height,SDL_Texture *texrue)  
: _position(x,y), _width(width),_height(height), _texture(texrue){
    _currentFrame.x = 0;
    _currentFrame.y = 0;
    _currentFrame.w = width;
    _currentFrame.h = height;
}

int Entity::getX() const{ return _position.getX(); }

int Entity::getY() const{ return _position.getY(); }

int Entity::getWidth()  const {return _width;}

int Entity::getHeight() const {return _height;}

SDL_Rect Entity::getCurrentFrame() const {return _currentFrame;}

SDL_Texture *Entity::getTexture()  const {return _texture; }

void Entity::setX(int x) { _position.setX(x); }

void Entity::setY(int y) {_position.setY(y); }

void Entity::setWidth(int width) {_width = width;}

void Entity::setHeight(int height) {_height = height; _currentFrame.h = height;}