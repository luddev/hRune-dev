/*
 * cObject.h
 *
 *  Created on: Dec 22, 2013
 *      Author: ludkiller
 */

#ifndef CGAMEOBJECT_H_
#define CGAMEOBJECT_H_

#include "cCommon.h"
#include "cState.h"

struct position {
	float x;
	float y;
	float w;
	float h;
};

class cGameObject {
private:

public:
	cGameObject(float x, float y, float w, float h, ObjectType objType) {
		m_position.x = x;
		m_position.y = y;
		m_position.w = w;
		m_position.h = h;
		m_objType = objType;
		m_xvel = 0;
		m_yvel = 0;
	}

	cGameObject(float x, float y, float w, float h, float _xvel, float _yvel,
			ObjectType objType) {
		m_position.x = x;
		m_position.y = y;
		m_position.w = w;
		m_position.h = h;
		m_objType = objType;
		m_xvel = _xvel;
		m_yvel = _yvel;

	}
	virtual ObjectState think() { return REMOVED; }	//Object Logic Goes in here override for object logic.
	virtual void draw() { ; }	//Draw call goes in here.
	virtual void destroy() { ; }	//

	virtual ~cGameObject() { ; }

	float getX() {
		return m_position.x;
	}
	float getY() {
		return m_position.y;
	}
	float getH() {
		return m_position.h;
	}
	float getW() {
		return m_position.w;
	}

	bool checkCollision(ObjectType src, ObjectType dest);

	position m_position;
	float m_xvel, m_yvel;
	ObjectType m_objType;

};

#endif /* CGAMEOBJECT_H_ */
