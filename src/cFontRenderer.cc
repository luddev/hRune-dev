#include "../include/cFontRenderer.h"




SDL_Texture* cFontRenderer::createDialogue(const char *dialogue, SDL_Color color, SDL_Renderer *renderer)    {

    SDL_Surface *tempSurface = TTF_RenderText_Blended(dialogueFont, dialogue, color);
	if (tempSurface == nullptr){
		//logSDLError(std::cout, "TTF_RenderText");
		return nullptr;
	}
	SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
	if (texture == nullptr){
		//logSDLError(std::cout, "CreateTexture");
	}
	//Clean up the surface and font
	SDL_FreeSurface(tempSurface);
	return texture;

}

SDL_Texture* cFontRenderer::createQuote(const char *quote, SDL_Color color, SDL_Renderer *renderer)    {
    SDL_Surface *tempSurface = TTF_RenderText_Blended(quoteFont, quote, color);
	if (tempSurface == nullptr){
		//logSDLError(std::cout, "TTF_RenderText");
		return nullptr;
	}
	SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
	if (texture == nullptr){
		//logSDLError(std::cout, "CreateTexture");
	}
	//Clean up the surface and font
	SDL_FreeSurface(tempSurface);
	return texture;

}

SDL_Texture* cFontRenderer::createText(const char *text, SDL_Color color, SDL_Renderer *renderer)    {
    SDL_Surface *tempSurface = TTF_RenderText_Blended(textFont, text, color);
	if (tempSurface == nullptr){
		//logSDLError(std::cout, "TTF_RenderText");
		return nullptr;
	}
	SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
	if (texture == nullptr){
		//logSDLError(std::cout, "CreateTexture");
	}
	//Clean up the surface and font
	SDL_FreeSurface(tempSurface);
	return texture;

}