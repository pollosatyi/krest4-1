#include "player.h"

Player::Player(char symbol, Field* field)
{
	_field = field;
	_symbol = symbol;

}



Field* Player::GetField()
{
	return _field;
}
