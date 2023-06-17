#include "humanPlayer.h"

#include <iostream>
#include <string>

void HumanPlayer::Turn()
{
	int turnRow;
	int turnColumn;
	int countCheckIsCellEmpty = 0;
	do {
		if (countCheckIsCellEmpty > 0) { std::cout << "��� ������ ������ " << std::endl; }
		turnRow = _inputEngine.GetRowFromUserInput();
		turnColumn = _inputEngine.GetColumnFromUserInput();
		countCheckIsCellEmpty++;
	} while (!_field->IsCellEmpty(turnRow, turnColumn));
	_field->SetCell(turnRow, turnColumn, _symbol);
}

HumanPlayer::HumanPlayer(char symbol, Field* field, InputEngine inputEngine) : Player(symbol, field)
{
	_inputEngine = inputEngine;
}

bool HumanPlayer::CheckWinner()
{
	return _field->CheckFieldForWin(_symbol);
}

void HumanPlayer::ShowPlayer()
{
	std::cout << "(�������)" << std::endl;
}
