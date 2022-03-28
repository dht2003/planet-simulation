#pragma once 

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdexcept>
#include "Entity.hpp"

class RenderWindow
{
    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
    public:
        RenderWindow(const char * title,unsigned int width, unsigned int height );
        SDL_Texture * loadTexture(const char * file_path);
        void render(Entity &entity);
        void display();
        void clear();
        void cleanUp();
        ~RenderWindow() {};
};

