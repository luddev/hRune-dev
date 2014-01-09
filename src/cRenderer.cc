#include "../include/cRenderer.h"

SDL_Texture* cRenderer::createTexture(SDL_Surface *surface) {
    SDL_Texture *tempTexture = SDL_CreateTextureFromSurface(gameRenderer,surface);
    SDL_FreeSurface(surface);
    return tempTexture;
}

SDL_Texture* cRenderer::createTexture(const char *fileName) {
    SDL_Surface *tempSurface = IMG_Load(fileName);
    SDL_Texture *tempTexture = SDL_CreateTextureFromSurface(gameRenderer,tempSurface);
    SDL_FreeSurface(tempSurface);
    //Add More Texture Optimization.
    return tempTexture;

}

void cRenderer::init()  {
    //Renderer Pre Init code here.

}

void cRenderer::render(SDL_Surface *gameSurface)    {
    //Blitting & Rendering code in here :P
}

void cRenderer::render(SDL_Texture *gameTexture)    {
    //Rendering Code
    SDL_RenderCopy(gameRenderer,gameTexture,NULL,NULL);
}

void cRenderer::shutDown()  {
    //Renderer Stopping code , deallocate all stuff 
}

void cRenderer::clearScreen()   {
    //Clear Screen Code.
    SDL_SetRenderDrawColor(gameRenderer,0,0,0,255);
    SDL_RenderClear(gameRenderer);
}

void cRenderer::drawExitScreen()    {
    //Draw Exit Screen.

}

void cRenderer::drawSplashScreen()  {
    //Draw Splash Screen.
    SDL_Texture *splashScreen = createTexture("../res/splash.png");
    render(splashScreen);
    
}