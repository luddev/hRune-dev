/*
 * cCommon.h
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#ifndef _C_COMMON_H_
#define _C_COMMON_H_

enum ObjectState {
	OSTATE_REMOVED = 0, OSTATE_ACTIVE = 1, OSTATE_ALIVE = 2
};

enum ObjectType{
	OTYPE_PLAYER = 0, OTYPE_COIN = 1, OTYPE_TILE_PASSIVE = 2, OTYPE_TILE_SOLID = 3, OTYPE_ENEMY = 4, OTYPE_NULL = 5
};

enum GameState{
	GSTATE_EXIT = 0,
	GSTATE_MAIN_MENU = 1,
	GSTATE_LOAD_LEVEL = 2,
	GSTATE_SPLASH_SCREEN = 3
};

#endif /* _C_COMMON_H_ */
