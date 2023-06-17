#include "DrawEngine.h"

#include<iostream>
#include "GameMode.h"

void DrawEngine::ShowWelcomeMessage()
{
	std::cout << "Игра крестики нолики" << std::endl;
}

void DrawEngine::ShowSelectedGameType()
{



	GameMode gameMode = _inputEngine.GetGameTypeFromUserInput();
	switch (gameMode) {
	case GameMode::EVE:
		std::cout << "Игра компьютер против компьютера началась: " << std::endl;
		break;
	case GameMode::EVP:
		std::cout << "Игра компьютер  против игрока началась: " << std::endl;
		break;
	case GameMode::PVE:
		std::cout << "Игра игрок  против компьютера  началась: " << std::endl;
		break;
	case GameMode::PVP:
		std::cout << "Игра игрок против игрока  началась: " << std::endl;
		break;
	default:
		std::cout << "ошибка ввода" << std::endl;


	}
}

void DrawEngine::ShowField(Field* field)
{
	std::cout << "+-+-+-+" << std::endl;
	for (int rowCounter = 0; rowCounter < 3; rowCounter++) {
		for (int columnCounter = 0; columnCounter < 3; columnCounter++) {
			std::cout << '|' << field->GetCell(rowCounter, columnCounter);
		}
		std::cout << '|' << std::endl;
		std::cout << "+-+-+-+" << std::endl;
	}
	std::cout << std::endl;
}
