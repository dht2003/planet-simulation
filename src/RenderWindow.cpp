#include "RenderWindow.hpp"

RenderWindow::RenderWindow(const char *title,unsigned int width, unsigned int height) : window(NULL) , renderer(NULL){
    window = SDL_CreateWindow(title,SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,width,height,SDL_WINDOW_SHOWN);
    
    if (window == NULL) 
        throw std::invalid_argument("[Error] Cannot create window\n");
    
    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
}

SDL_Texture * RenderWindow::loadTexture(const char * file_path) {
    SDL_Texture * texture = NULL;
    texture = IMG_LoadTexture(renderer,file_path);
    if (texture == NULL)
        throw std::invalid_argument("[Error] Cannot load texture");
    return texture;
    
}

void RenderWindow::render(Entity &entity) {
    SDL_Rect src;
    src.x = entity.getCurrentFrame().x;
    src.y = entity.getCurrentFrame().y;
    src.w = entity.getCurrentFrame().w;
    src.h = entity.getCurrentFrame().h;

    SDL_Rect dst;
    dst.x = entity.getX();
    dst.y = entity.getY();
    dst.w = entity.getWidth();
    dst.h = entity.getHeight();
    
    SDL_RenderCopy(renderer,entity.getTexture(),&src,&dst);
}

void RenderWindow::display() {
    SDL_RenderPresent(renderer);
}

void RenderWindow::clear() {
    SDL_RenderClear(renderer);
}

void RenderWindow::cleanUp() {
    SDL_DestroyWindow(window);
}

