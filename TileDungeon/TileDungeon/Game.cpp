#include "Game.h"

void Game::load()
{
	window = SDL_CreateWindow("Tile Dungeon", 100, 100, 800, 640, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	world.load(renderer);
}

void Game::Inputs()
{

}

bool Game::update()
{

	return false;
}

void Game::draw()
{
	SDL_RenderClear(renderer);
	world.draw(renderer);
	SDL_RenderPresent(renderer);
}

void Game::close()
{
	world.clean();
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}