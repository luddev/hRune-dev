/*
 * cState.cc
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#include "../include/cState.h"


GameState cState::getState()	{
	return m_gState;
}

void cState::setState(GameState _gState)	{
	m_gState = _gState;
    m_engineInstance->init(m_gState);
}

void cState::think()	{
    /***
	//Call Think for Every Object on the scene
	if(m_gState == GSTATE_SPLASH_SCREEN)	{
		//Splash Loading Code.
		return;
	}
	if(m_gState == GSTATE_MAIN_MENU)	{
		//Main Menu Loading Code.
		return;
	}
	if(m_gState == GSTATE_LOAD_LEVEL)	{
		//Load Level Loading Code.
		return;
	}
	if(m_gState == GSTATE_EXIT)	{
		//Exit Loading Code.
		return;
	}
    ***/
    //Do I even need above code ?
    m_engineInstance->update();

	
	return;
}

void cState::draw()	{
    /***
	//Call Draw for Every Object on the Scene
	if(m_gState == GSTATE_SPLASH_SCREEN)	{
		//Splash Loading Code.
		return;
	}
	if(m_gState == GSTATE_MAIN_MENU)	{
		//Main Menu Loading Code.
		return;
	}
	if(m_gState == GSTATE_LOAD_LEVEL)	{
		//Load Level Loading Code.
		return;
	}
	if(m_gState == GSTATE_EXIT)	{
		//Exit Loading Code.
		return;
	}
    **/
    //Do I even need above code?

    m_engineInstance->draw();

	return;
}

