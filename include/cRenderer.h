#ifndef _CRENDERER_H
#define _CRENDERER_H



#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

#include "cCommon.h"
#include "cFontRenderer.h"

//Rewrite cRenderer :: Done
class cRenderer {
public:
    SDL_Window *gameWindow;
    SDL_Renderer *gameRenderer;
    cFontRenderer fontRenderer;
    
    cRenderer() {
        gameWindow = SDL_CreateWindow("hRune-dev",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, 800,600,SDL_WINDOW_SHOWN);
        gameRenderer = SDL_CreateRenderer(gameWindow,0,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    }
    
    void init();
    void shutDown();
    void render(SDL_Surface *gameSurface);
    void render(SDL_Texture *gameTexture);
    void clearScreen();

    SDL_Texture* createTexture(const char *fileName);
    SDL_Texture* createTexture(SDL_Surface *surface);
    void drawSplashScreen();
    void drawExitScreen();
    void drawMenuScreen();



};


#endif //_CRENDERER_H

