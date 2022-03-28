#pragma once 

#include <cmath>
#include <SDL2/SDL.h>
#include "vector2d.hpp"
#include "Entity.hpp"

class planet : public Entity  {
    private:
        float _radius;
        float _mass;
        vector2d<float> _velocity;

    public:
        planet(int x, int y,float radius,float mass,SDL_Texture *texture);
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