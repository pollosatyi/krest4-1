#include "InputEngine.h"
#include <string>
#include <exception>
#include "Game.h"

int InputEngine::GetIntFromConsole(int minValue, int maxValue, char* promt)
{
	int result = 10;
	std::string userInput;
	do {
		std::cout << promt << std::endl;
		std::cin >> userInput;
		if (std::isdigit(*userInput.begin())) {
			result = stoi(userInput);
		}
		if (result < minValue || result > maxValue) {
			std::cout << "Неверный ввод попробуйте снова" << std::endl;
		}
	} while (result < minValue || result > maxValue);
	return result;
}



GameMode InputEngine::GetGameTypeFromUserInput()
{
	std::cout << "Выбор игры: " << std::endl;
	std::cout << "нажмите 1 для выбора компьютер(X) против компьютера(O)" << std::endl;
	std::cout << "нажмите 2 для выбора компьютер против игрока" << std::endl;
	std::cout << "нажмите 3 для выбора игрок против компьютера" << std::endl;
	std::cout << "нажмите 4 для выбора игрок против игрока" << std::endl;
	int getNumberGame = GetIntFromConsole(1, 4, (char*)("Введите номер игры: "));

	switch (getNumberGame)
	{
	case 1:
		return GameMode::EVE;
	case 2:
		return GameMode::EVP;
	case 3:
		return GameMode::PVE;
	case 4:
	default:
		return GameMode::PVP;
	}
}
int InputEngine::GetRowFromUserInput()
{
	int turnRow = GetIntFromConsole(0, 2, (char*)("введите номер строки хода (0-2)"));
	return turnRow;
}

int InputEngine::GetColumnFromUserInput()
{
	int turnColumn = GetIntFromConsole(0, 2, (char*)("введите номер столбца хода (0-2)"));
	return turnColumn;

}

