#pragma once

#include "field.h"
#include "InputEngine.h"

class DrawEngine
{
private:
	InputEngine _inputEngine;
public:
	void ShowWelcomeMessage();
	void ShowSelectedGameType();
	void ShowField(Field*);
};

