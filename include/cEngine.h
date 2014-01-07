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
#include "cGameObject.h"

class cEngine {
public:
    GameState m_gState;

    cEngine()   {;}
    cEngine(GameState _gState)  { m_gState = _gState; }

    void init(GameState _gState);
	void update();
	void draw();

	bool add(cGameObject *_object, long int _objID);

private:
	std::map<long int , cGameObject *> m_gameObjectList;
    int objID;

	void registerCollisionHandler(ObjectType handles, ObjectType testObj);
	void remove(long int _objID);
};

#endif /* _C_ENGINE_H_ */
