#include <SDL.h>
#include "Game.h"

int main(int argc, char* args[])
{
	Game game;
	bool gameover = false;

	game.load();
	while (!gameover)
	{
		game.Inputs();
		gameover = game.update();
		game.draw();
	}

	game.close();
	return 0;
}