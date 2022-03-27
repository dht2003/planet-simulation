#pragma once 

#include <utility>
#include <cmath>

class planet {
    private:
        std::pair<int,int> _position;
        float _radius;
        float _mass;
        float _xVelocity;
        float _yVelocity;
        SDL_Color _color;

    public:
        int getX();
        int getY();
        std::pair<int,int> getPosition();
        void setX(int x);
        void setY(int y);
        float getRadius();
        float getMass();
        float getXVel();
        float getYVel();
        void setXVel(float xVel);
        void setYVel(float yVel);
        void addXVVel(float xVel);
        add addYVel(float yVel);
        SDL_Color getPlanetColor();
        void setPlanetColor(SDL_Color color);
};