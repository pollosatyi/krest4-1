#pragma once
#include "player.h"
#include "InputEngine.h"

class HumanPlayer :public Player
{
	InputEngine _inputEngine;
public:
	void Turn() override;
	HumanPlayer(char symbol, Field* field, InputEngine inputEngine);
	bool CheckWinner() override;
	void ShowPlayer() override;


};

