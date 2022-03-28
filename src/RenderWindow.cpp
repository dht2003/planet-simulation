#include "RenderWindow.hpp"

RenderWindow::RenderWindow(std::string title,unsigned int width, unsigned int height) : window(NULL) , render(NULL){
    widnow = SDL_CreateWindow(title,SDL_WINPOS_UNDEFINED,SDL_WINPOS_UNDEFINED,width,height,SDL_WINDOW_SHOWN);
    
    if (window == NULL) 
        throw std::invalid_argument("[Error] Cannot create windw\n");
    
    render = SDL_CreateRender(window,-1,SDL_RENDER_ACCLERATED);
}

SDL_Texture * RenderWindow::loadTexture(std::string file_path) {
    SDL_Texture * texture = NULL;
    texture = IMG_loadTexture(render,file_path);
    if (texture == NULL)
        throw std::invalid_argument("[Error] Cannot load texture");
    return texture;
    
}

void RenderWindow::render(Entity &entity) {
    SDL_Rect src.x = entity.getCurrentFrame().x;
    SDL_Rect src.y = entity.getCurrentFrame().y;
    SDL_Rect src.w = entity.getCurrentFrame().w;
    SDL_Rect src.h = entity.getCurrentFrame().h;

    SDL_Rect dst;
    dst.x = entity.getX();
    dst.y = entity.getY();
    dst.w = entity.getWidth();
    dst.h = entity.getHeight();
    
    SDL_RenderCopy(render,texture,&src,&dst);
}

void RenderWindow::display() {
    SDL_RenderPresent(render);
}

void RenderWindow::clear() {
    SDL_RenderClear(render);
}

RenderWindow::cleanUp() {
    SDL_DestroyWindow(window);
}

