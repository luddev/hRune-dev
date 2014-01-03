/*
 * cDvar.h
 *
 *  Created on: Jan 3, 2014
 *      Author: ludkiller
 */

 #ifndef _C_DVAR_H
 #define _C_DVAR_H

enum DvarFlag	{
	DVAR_FLAG_NONE = 0x00,
	DVAR_FLAG_USERCREATED = 0x01,
	DVAR_FLAG_CHEAT = 0x02,
	DVAR_FLAG_READONLY = 0x04

};

inline DvarFlag operator|(DvarFlag a, DvarFlag b) {
        return static_cast<DvarFlag>(static_cast<int>(a) | static_cast<int>(b));
}

class cDvar {
private:

public:


};


 #endif // _C_DVAR_H