/*
 * cCommon.h
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#ifndef _C_COMMON_H_
#define _C_COMMON_H_

#include "cLog.h"

//Screen Width and Height
//Select at Run Time maybe?
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
