#pragma once


#include "DrawEngine.h"
#include "Player.h"

#include<iostream>
#include "GameMode.h"

class Game
{
private:
	DrawEngine _drawEngine;
	InputEngine _inputEngine;
public:
	Game(DrawEngine);

	void GameStart(GameMode);
	void GameStart(Player*, Player*);
	void GameStart();
};

