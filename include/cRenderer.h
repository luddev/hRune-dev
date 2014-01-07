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

	static void renderAt();
	static void renderRotatedAt();
	static void renderFlippedAt();

	static SDL_Texture* createTexture(const char *fileName);
    static void placeObject(SDL_Surface *source, SDL_Surface *dest,SDL_Rect _src, SDL_Rect _dest);
    static void placeTile(SDL_Surface *source, SDL_Surface *dest,SDL_Rect _src, int index);

    static void drawExitScreen();
    static void drawSplashScreen();
};

#endif //_CRENDERER_H

