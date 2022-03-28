#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "vector2d.hpp"


class Entity {
    public:
        Entity(int x, int y,int width, int height,SDL_Texture *texture);
        int getX() const;
        int getY() const;
        int getWidth() const;
        int getHeight() const;
        SDL_Rect getCurrentFrame() const;
        SDL_Texture *getTexture() const;
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
};