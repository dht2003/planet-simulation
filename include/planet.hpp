#pragma once 

#include <cmath>
#include <SDL2/SDL.h>
#include "vector2d.hpp"
#include "Entity.hpp"

class planet : public Entity  {
    private:
        double _radius;
        double _mass;
        vector2d<double> _velocity;

    public:
        planet(double x, double y,double radius,double mass,SDL_Texture *texture);
        double getRadius();
        double getMass() const;
        double getXVel() const;
        double getYVel() const;
        vector2d<double> getVel() const;
        void setXVel(double xVel);
        void setYVel(double yVel);
        void addVelocity(vector2d<double> velocity);
        void update(double time);
        void setPlanetColor(SDL_Color color);
};