#ifndef _CRENDERER_H
#define _CRENDERER_H

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
//Player Stand Animation.
#define PLAYER_ANIMATE_STAND_X 0
#define PLAYER_ANIMATE_STAND_Y 0
#define PLAYER_ANIMATE_STAND_W 80
#define PLAYER_ANIMATE_STAND_H 80
//Player Run Animation.
#define PLAYER_ANIMATE_RUN_X 0
#define PLAYER_ANIMATE_RUN_Y 0
#define PLAYER_ANIMATE_RUN_W 80
#define PLAYER_ANIMATE_RUN_H 80
//Player Jump Animation
#define PLAYER_ANIMATE_JUMP_X 0
#define PLAYER_ANIMATE_JUMP_Y 0
#define PLAYER_ANIMATE_JUMP_W 80
#define PLAYER_ANIMATE_JUMP_H 80
//Player Climb Animation
#define PLAYER_ANIMATE_CLIMB_X 0
#define PLAYER_ANIMATE_CLIMB_Y 0
#define PLAYER_ANIMATE_CLIMB_W 80
#define PLAYER_ANIMATE_CLIMB_H 80

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

#include "cCommon.h"

//Rewrite cRenderer :: Done
class cRenderer {
public:
    SDL_Window *gameWindow;
    SDL_Renderer *gameRenderer;
    
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



};


#endif //_CRENDERER_H

