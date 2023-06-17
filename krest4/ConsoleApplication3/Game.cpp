#include "game.h"
#include "aiPlayer.h"
#include "humanPlayer.h"
#include "GameMode.h"



void Game::GameStart()
{
	Field* field = new Field;
	_drawEngine.ShowField(field);
	AiPlayer aiplayer('x', field);
	HumanPlayer humanPlayer('o', field, _inputEngine);
	aiplayer.Turn();
	_drawEngine.ShowField(field);
	humanPlayer.Turn();
	_drawEngine.ShowField(field);
}

Game::Game(DrawEngine drawEngine)
{
	_drawEngine = drawEngine;
}

void Game::GameStart(GameMode gameMode)
{
	Field* field = new Field;
	switch (gameMode) {
	case GameMode::EVE: {
		AiPlayer* player1 = new AiPlayer('x', field);
		AiPlayer* player2 = new AiPlayer('o', field);
		GameStart(player1, player2);
		break; }
	case GameMode::EVP: {
		AiPlayer* player1 = new AiPlayer('x', field);
		HumanPlayer* player2 = new HumanPlayer('o', field, _inputEngine);
		GameStart(player1, player2);
		break; }
	case GameMode::PVE: {
		HumanPlayer* player1 = new HumanPlayer('x', field, _inputEngine);
		AiPlayer* player2 = new AiPlayer('o', field);
		GameStart(player1, player2);
		break; }
	case GameMode::PVP: {
		HumanPlayer* player1 = new HumanPlayer('x', field, _inputEngine);
		HumanPlayer* player2 = new HumanPlayer('o', field, _inputEngine);
		GameStart(player1, player2);
		break; }
	}
}

void Game::GameStart(Player* player1, Player* player2)
{
	Field* field = player1->GetField();
	int countPlayerStep = 0;
	do {
		player1->Turn();
		_drawEngine.ShowField(field);
		if (player1->CheckWinner()) {
			std::cout << "Победил игрок 1";
			player1->ShowPlayer();
			break;
		}
		countPlayerStep += 2;
		if (countPlayerStep > 8) {
			std::cout << "Ничья" << std::endl;
			break;
		}
		player2->Turn();
		_drawEngine.ShowField(field);
		if (player2->CheckWinner()) {
			std::cout << "Победил игрок 2";
			player2->ShowPlayer();
			break;
		}

	} while (!field->IsFieldFull());

}
