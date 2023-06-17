#pragma once
#include "field.h"
class Player
{
protected:
	char _symbol;
	Field* _field;
public:
	Player(char symbol, Field* field);
	virtual void Turn() = 0;
	virtual bool CheckWinner() = 0;
	virtual void ShowPlayer() = 0;
	Field* GetField();
};

