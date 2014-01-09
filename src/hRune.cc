/*
 * hRune.cc
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

//Note To Self : Fix Renderer.
//Only Rendering needs to be fixed for first satge of the game :/

#include<iostream>

#include<SDL2/SDL.h>
#include<SDL2/SDL_main.h>

#include "../include/cEngine.h"
#include "../include/cState.h"
#include "../include/cGameObject.h"
#include "../include/cRenderer.h"


int main(int argc, char **argv) {

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Event event;
	//cRenderer::gameWindow = SDL_CreateWindow("hRune-dev", 50, 50, 640, 480, SDL_WINDOW_SHOWN);
    //cRenderer::globalRenderer = SDL_CreateRenderer(cRenderer::gameWindow,0,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	cState stateManager;
    stateManager.setState(GameState::GSTATE_SPLASH_SCREEN);
	while (1) {

        //Add some kind of CAP.
        stateManager.think();
		stateManager.draw();

		if (SDL_PollEvent(&event)) {
			//Think and Draw baby, Think and Draw;

			if (event.type == SDL_KEYDOWN) {
				switch (event.key.keysym.sym) {
				case SDLK_w:
					break;
				case SDLK_a:
					break;

				}
			}

			if (event.type == SDL_QUIT) {
				stateManager.setState(GSTATE_EXIT);
				SDL_Quit();
			}
		}
	}
	return 0;

}

