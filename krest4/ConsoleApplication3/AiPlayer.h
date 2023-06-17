#pragma once
#include "player.h"
#include <random>


class AiPlayer :public Player
{
	std::random_device _rand;
public:
	void Turn() override;
	AiPlayer(char symbol, Field* field);
	bool CheckWinner() override;
	void ShowPlayer() override;
};

