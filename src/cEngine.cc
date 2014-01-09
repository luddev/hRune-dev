/*
 * cEngine.cc
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#include "../include/cEngine.h"
#include "../include/cRenderer.h"

bool cEngine::add(cGameObject *_object, long int _objID)	{
    m_gameObjectList.push_back(_object);
	return true;
}

void cEngine::init(GameState _gState)    {
    //init Objects According to game State
    //Reinit on Change of State.
    gameRenderer.clearScreen();
    m_gState = _gState;
    if(_gState == GSTATE_SPLASH_SCREEN)	{
		//Splash Loading Code.
        gameRenderer.drawSplashScreen();
		return;
	}
	if(_gState == GSTATE_MAIN_MENU)	{
		//Main Menu Loading Code.

		return;
	}
	if(_gState == GSTATE_LOAD_LEVEL)	{
		//Load Level Loading Code.
		return;
	}
	if(_gState == GSTATE_EXIT)	{
		//Exit Loading Code.
        //cRenderer::drawExitScreen();
		return;
	}

}

void cEngine::draw() {
    SDL_RenderPresent(gameRenderer.gameRenderer);
}

void cEngine::update() {
   
}

void cEngine::registerCollisionHandler(ObjectType handles, ObjectType testObj)	{

}

void cEngine::remove(long int _objID)	{

}
