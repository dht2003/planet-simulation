#include <iostream>
#include <stdexcept>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <cstddef>
#include "RenderWindow.hpp"
#include "planet.hpp"


const int SCREEN_WIDTH = 1920;
const int SCREEN_HEIGHT = 1080;


int main(int argc, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
        std::cout << "SDL ERROR: " << SDL_GetError() << std::endl;
    if (!IMG_Init(IMG_INIT_PNG))
        std::cout << "SDL ERROR: " << SDL_GetError() << std::endl;
    RenderWindow window("Game",SCREEN_WIDTH,SCREEN_HEIGHT);

    SDL_Texture *tex = window.loadTexture("assets/sun.png");
    SDL_Texture *tex2 = window.loadTexture("assets/earth.png");
    planet p0(100,100,100,500,tex);
    planet p1(200,200,500,2,tex2);
    bool gameRunning = true;
    SDL_Event e;
    int x,y;

    while (gameRunning) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT)
                gameRunning = false;
        }
        uint32_t buttons = SDL_GetMouseState(&x,&y);
        window.clear();
        p0.setPosition(x,y);
        window.render(p0);
        window.render(p1);
        window.display();
    }
    
    return 0;
}