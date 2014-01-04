#ifndef _CRENDERER_H
#define _CRENDERER_H

#include<SDL2/SDL.h>

class cRenderer {
public:
	static void renderAt();
	static void renderRotatedAt();
	static void renderFlippedAt();

	static SDL_Texture* createTexture(SDL_Surface *_sTex);
	static SDL_Texture* createTextureFromSprite(SDL_Surface *_sTex, SDL_Rect _clipParam, int _count);
	static SDL_Texture* createTextureFromSprite(SDL_Surface *_sTex, SDL_Rect _clipParam);
};

#endif //_CRENDERER_H

