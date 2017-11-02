#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"

// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp
// comment to see what happen
class Ice : public GraphObject
{
public:

	Ice(int startX, int startY);
};

class Iceman :public GraphObject
{
public:
	Iceman();
};

#endif // ACTOR_H_
