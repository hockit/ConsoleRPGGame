#include "Game.h"

int main()
{
	Game game;
	while (game.getGameStatus())
	{
		game.mainMenu();
	}
}