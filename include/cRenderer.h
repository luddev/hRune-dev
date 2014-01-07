#ifndef _CRENDERER_H
#define _CRENDERER_H

#include<SDL2/SDL.h>

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

class cRenderer {
public:

    static SDL_Window *gameWindow;
    static SDL_Renderer *globalRenderer;

    cRenderer() {
        cRenderer::gameWindow = SDL_CreateWindow("hRune-dev", 50, 50, 640, 480, SDL_WINDOW_SHOWN);
        cRenderer::globalRenderer = SDL_CreateRenderer(cRenderer::gameWindow,0,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    }

	static void renderAt();
	static void renderRotatedAt();
	static void renderFlippedAt();

	//static SDL_Texture* createTexture(const char *fileName);
    static void placeObject(SDL_Surface *source, SDL_Surface *dest,SDL_Rect _src, SDL_Rect _dest);
    static void placeTile(SDL_Surface *source, SDL_Surface *dest,SDL_Rect _src, int index);

    static SDL_Texture* cRenderer::createTexture(const char *fileName)   {
         SDL_Texture *tempTexture;
         SDL_Surface *tempSurface;
         tempSurface = IMG_Load(fileName);
         tempTexture = SDL_CreateTextureFromSurface(cRenderer::globalRenderer, tempSurface);
         SDL_FreeSurface(tempSurface);
         return tempTexture;
    }

    static void cRenderer::drawSplashScreen()  {
         SDL_Texture *splashScreen = createTexture("../res/splash.png");
          SDL_RenderCopy(cRenderer::globalRenderer,splashScreen,NULL,NULL);
         return;

    }

    static void cRenderer::drawExitScreen()    {
        SDL_Texture *exitSplashScreen = createTexture("../res/exitSplash.png");
        SDL_RenderCopy(cRenderer::globalRenderer,exitSplashScreen,NULL,NULL);
        return;
    }
};

#endif //_CRENDERER_H

