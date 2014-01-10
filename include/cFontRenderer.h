#ifndef _C_FONTRENDERER_H
#define _C_FONTRENDERER_H

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"

#include "cCommon.h"

class cFontRenderer {
private:

public:
    TTF_Font *textFont;
    TTF_Font *dialogueFont;
    TTF_Font *quoteFont;
    
    cFontRenderer() {
        quoteFont = TTF_OpenFont("../res/courier.ttf",64);
        textFont = TTF_OpenFont("../res/courier.ttf",32);
        dialogueFont = TTF_OpenFont("../res/courier.ttf",32);
    }

    ~cFontRenderer()    {
        TTF_CloseFont(quoteFont);
        TTF_CloseFont(textFont);
        TTF_CloseFont(dialogueFont);
    }


    SDL_Texture* createText(const char *text,SDL_Color color, SDL_Renderer *renderer);
    SDL_Texture* createQuote(const char *quote,SDL_Color color, SDL_Renderer *renderer);
    SDL_Texture* createDialogue(const char *dailogue,SDL_Color color,SDL_Renderer *renderer);
};

#endif //_C_FONTRENDERER_H
