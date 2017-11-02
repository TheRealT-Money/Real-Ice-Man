#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include "GameConstants.h"
#include "Actor.h"
#include <string>
#include<memory>
#include<vector>
using namespace std;

// Students:  Add code to this file, StudentWorld.cpp, Actor.h, and Actor.cpp

class StudentWorld : public GameWorld
{
public:
	StudentWorld(std::string assetDir)
		: GameWorld(assetDir)
	{
	}

	virtual int init()
	{
	
		// 'i' is row
		// 'j' is column
		Iceman *Ice_man=new Iceman;
		for (size_t i = 0; i < 64; i++)
		{
			//create vector of shared pointer
			Ice_Array.emplace_back(vector<shared_ptr<Ice>>());
			for (size_t j = 0; j < 64; j++)
			{
				//fill out that vector of shared pointer
				Ice_Array[i].emplace_back(make_shared<Ice>(i, j));
			}
		}
		for (size_t i = 0; i < 64;	 i++)
		{
			for (size_t j = 60; j < 64; j++)
			{
				Ice_Array[i][j]->setVisible(false);
			}
		}
		for (size_t i = 30; i < 34; i++)
		{
			for (size_t j = 0; j < 64; j++)
			{
				Ice_Array[i][j]->setVisible(false);
			}
		}
		

		return GWSTATUS_CONTINUE_GAME;
	}

	virtual int move()
	{
		// This code is here merely to allow the game to build, run, and terminate after you hit enter a few times.
		// Notice that the return value GWSTATUS_PLAYER_DIED will cause our framework to end the current level.
		decLives();
		return GWSTATUS_CONTINUE_GAME;

	}

	virtual void cleanUp()
	{
	}

private:
	//making a vector of vector of shared pointer
	vector<vector<shared_ptr<Ice>>> Ice_Array; 
	shared_ptr<Iceman>Ice_man;


	//everything else containerh

	
};

#endif // STUDENTWORLD_H_
