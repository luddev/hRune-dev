/*
 * cState.h
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#ifndef CSTATE_H_
#define CSTATE_H_

#include "cCommon.h"
#include "cEngine.h"



class cState {
public:
	GameState m_gState;
	cEngine *m_engineInstance;

	cState()	{
		m_gState = GameState::GSTATE_SPLASH_SCREEN;
        m_engineInstance = new cEngine(m_gState);
	}

	cState(GameState _gState)	{
		m_gState = _gState;
        m_engineInstance = new cEngine();
	}

	GameState getState();
	void setState(GameState _gState);

	void think();
	void draw();


};

#endif /* CSTATE_H_ */
