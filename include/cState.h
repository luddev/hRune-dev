/*
 * cState.h
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#ifndef CSTATE_H_
#define CSTATE_H_



enum ObjectState {
	OSTATE_REMOVED = 0, OSTATE_ACTIVE = 1
};

enum ObjectType {
	OTYPE_PLAYER = 0, OTYPE_COIN = 1, OTYPE_TILE_PASSIVE = 2, OTYPE_TILE_SOLID = 3, OTYPE_ENEMY = 4
};

enum GameState	{
	GSTATE_EXIT = 0,
	GSTATE_MAIN_MENU = 1,
	GSTATE_LOAD_LEVEL = 2,
	GSTATE_SPLASH_SCREEN = 3
};

class cState {
public:
	GameState m_gState;
	cEngine m_engineInstance;

	cState()	{
		m_gState = GSTATE_SPLASH_SCREEN;
	}

	cState(GameState _gState)	{
		m_gState = _gState;
	}

	GameState getState();
	void setState(GameState _gState);

	void think();
	void draw();


};

#endif /* CSTATE_H_ */
