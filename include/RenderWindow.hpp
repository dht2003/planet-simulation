#pragma once 

#include <SDL2/SDL.H>
#include <SDL2/SDL_image.h>
#include <stdexcept>
#include <string>
#include "Entity.hpp"

class RenderWindow
{
private:
    SDL_Window *window;
    SDL_Render *render;
public:
    RenderWindow(std::string title,unsigned int width, unsigned int height );
    SDL_Texture * loadTexture(std::string file_path);
    void render(Entity &entity);
    void display();
    void clear();
    void cleanUp();
    
    ~RenderWindow() {};
};

