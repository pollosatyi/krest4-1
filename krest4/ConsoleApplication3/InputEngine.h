#pragma once


#include "GameMode.h"

class InputEngine
{
private:
	int GetIntFromConsole(int, int, char*);
public:
	GameMode GetGameTypeFromUserInput();
	int GetRowFromUserInput();
	int GetColumnFromUserInput();


};

