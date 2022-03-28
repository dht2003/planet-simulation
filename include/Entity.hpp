#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "vector2d.hpp"


class Entity {
    public:
        Entity(vector2d<int> position,SDL_Texture *texture);
        int getX();
        int getY();
        int getWidth();
        int getHeight();
        SDL_Rect getCurrentFrame();
        SDL_Texture *getTexture();
        void setX(int x);
        void setY(int y);
        void setWidth(int width);
        void setHeight(int height);
    private:
        vector2d<int> _position;
        vector2d<int> _size;
        int _width, _height;
        SDL_Rect _currentFrame;
        SDL_Texture *_texture;
}