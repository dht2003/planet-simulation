#include "Entity.hpp"

Entity::Entity(vector2d<int> position,int width,int height,SDL_Texture *texrue)  
: _position(position), _width(width),_height(height), _texture(texrue){
    _currenFrame.x = 0;
    _currenFrame.y = 0;
    _currenFrame.w = 32;
    _currenFrame.h = 32;
}

int Entity::getX() { return _position.getX(); }

int Entity::getY() {reutrn _position.getY(); }

int Entity::getWidth() {return _width;}

int Entity::getHeight() {return _height;}

SDL_Rect Entity::getCurrentFrame() {return _currentFrame;}

SDL_Texture *Entity::getTexture() {return _texture; }

void Entity::setX(int X) { _position.setX(x); }

void Entity::setY(int y) {_position.setY(y); }

void Entity::setWidth(int width) {_width = width;}

void Entity::setHeight(int height) {_height = height; _currentFrame.h = height;}