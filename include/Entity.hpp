#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "vector2d.hpp"


class Entity {
    public:
        Entity(double x, double y,double width, double height,SDL_Texture *texture);
        double getX() const;
        double getY() const;
        vector2d<double> getPosition() const;
        double getWidth() const;
        double getHeight() const;
        SDL_Rect getCurrentFrame() const;
        SDL_Texture *getTexture() const;
        void setX(double x);
        void setY(double y);
        void setPosition(double x,double y);
        void move(double x,double y);
        void setWidth(double width);
        void setHeight(double height);
    private:
        vector2d<double> _position;
        vector2d<double> _size;
        double _width, _height;
        SDL_Rect _currentFrame;
        SDL_Texture *_texture;
};