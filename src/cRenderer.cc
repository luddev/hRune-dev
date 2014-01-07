#include "../include/cRenderer.h"


SDL_Texture* cRenderer::createTexture(const char *fileName)   {
    SDL_Texture *tempTexture;
    SDL_Surface *tempSurface;
    tempSurface = IMG_Load(fileName);
    tempTexture = SDL_CreateTextureFromSurface(cRenderer::globalRenderer, tempSurface);
    return tempTexture;
}

void cRenderer::drawSplashScreen()  {
    SDL_Texture *splashScreen = cRenderer::createTexture("../res/splash.png");
    SDL_RenderCopy(cRenderer::globalRenderer,splashScreen,NULL,NULL);
    return;

}

void cRenderer::drawExitScreen()    {
    SDL_Texture *exitSplashScreen = cRenderer::createTexture("../res/exitSplash.png");
    SDL_RenderCopy(cRenderer::globalRenderer,exitSplashScreen,NULL,NULL);
    return;
}