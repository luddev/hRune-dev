/*
 * cEngine.h
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#ifndef _C_ENGINE_H_
#define _C_ENGINE_H_

#include <vector>
#include <map>
#include "cCommon.h"
#include "cGameObject.h"
#include "cRenderer.h"
#include "cPlayer.h"

class cEngine {
public:
    GameState m_gState;
    cRenderer gameRenderer;
    SDL_Texture *gameTexture;
    SDL_Surface *gameSurface;

    cEngine()   {;}

    cEngine(GameState _gState)  { m_gState = _gState; }

    void init(GameState _gState);
	void update();
	void draw();

	bool addTile(cGameObject *_object);
    bool addEnemy(cGameObject *_object);

private:
	std::vector<cGameObject *> m_gameObjectTile;
    //std::vector<cGameObject *> m_gameObjectBlocks;
    std::vector<cGameObject *> m_gameObjectEnemy;


	void registerCollisionHandler(ObjectType handles, ObjectType testObj);
	void remove(long int _objID);
};

#endif /* _C_ENGINE_H_ */
