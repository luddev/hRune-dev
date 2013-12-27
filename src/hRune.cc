/*
 * hRune.cc
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#include<iostream>

#include<SDL2/SDL.h>
#include<SDL2/SDL_main.h>

int main(int argc, char **argv) {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Event event;
        std::map

	SDL_Window *window;
	SDL_Renderer *renderer;
	window = SDL_CreateWindow("TEST", 50, 50, 640, 480, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window,0,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	while (1) {

		if (SDL_PollEvent(&event)) {

			if (event.type == SDL_KEYDOWN) {
				switch (event.key.keysym.sym) {
				case SDLK_w:
					break;
				case SDLK_a:
					break;

				}
			}
			if (event.type == SDL_QUIT) {
				SDL_Quit();
			}
		}
	}
	return 0;

}

