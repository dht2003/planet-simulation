#pragma once 

#include <cmath>
#include <SDL2/SDL.h>
#include "vector2d.hpp"

class planet {
    private:
        vector2d<int> _position;
        float _radius;
        float _mass;
        vector2d<float> _velocity;
        SDL_Color _color;

    public:
        int getX() const;
        int getY() const;
        vector2d<int> getPosition();
        void setX(int x);
        void setY(int y);
        float getRadius();
        float getMass() const;
        float getXVel() const;
        float getYVel() const;
        void setXVel(float xVel);
        void setYVel(float yVel);
        void addVelocity(vector2d<float> velocity);
        SDL_Color getPlanetColor();
        void setPlanetColor(SDL_Color color);
};