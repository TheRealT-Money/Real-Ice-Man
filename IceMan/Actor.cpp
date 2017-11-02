#include "Actor.h"
#include "StudentWorld.h"

// Students:  Add code to this file (if you wish), Actor.h, StudentWorld.h, and StudentWorld.cpp

//hey 

Ice::Ice(int startX, int startY) :GraphObject(IID_ICE, startX, startY, right, 0.25, 3)
{
	setVisible(true);
}

Iceman::Iceman():GraphObject(IID_PLAYER,30,60,left,1.0,0)
{
	setVisible(true);
}
