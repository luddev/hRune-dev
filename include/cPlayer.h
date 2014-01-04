/*
 * cPlayer.h
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#ifndef CPLAYER_H_
#define CPLAYER_H_

#include "cGameObject.h"


class cPlayer : cGameObject {
private:
    bool m_isSpawned;
    bool m_isDead;
    bool m_bFlip;
public:
    cPlayer();
	ObjectState think(SDL_Event &event);
	void draw();
	void destroy();
	
};

#endif /* CPLAYER_H_ */
