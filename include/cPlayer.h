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

public:
	ObjectState think();
	void draw();
	void destroy();
	
};

#endif /* CPLAYER_H_ */
