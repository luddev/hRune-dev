/*
 * cPlayer.cc
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#include "../include/cPlayer.h"
#include "../include/cState.h"

cPlayer::cPlayer()  {
    m_isSpawned = true;
    m_isDead = false;
    m_bFlip = false;
}

ObjectState cPlayer::think(SDL_Event &event) {

	//Add Movement Code in Here
	//Add Check Collision Code in here.
    if(m_isSpawned == true && m_isDead == false)    {
       if (SDL_PollEvent(&event)) {
			//Think and Draw baby, Think and Draw;
            if (event.type == SDL_KEYDOWN) {
				switch (event.key.keysym.sym) {
				case SDLK_w:
                    //Add Sauce here
					break;
				case SDLK_a:
                    //Add Sauce here
                    m_bFlip = false;
					break;
                case SDLK_s:
                    //Add Sauce here
                    break;
                case SDLK_d:
                    //Add Sauce here
                    m_bFlip = true;
                    break;

				}
			}

        }
    }
    


	return OSTATE_REMOVED;
}

void cPlayer::draw() {
	//Add Player Draw Code.
}

void cPlayer::destroy() {
    //Add Death Animation Deallocate Memory.
}
