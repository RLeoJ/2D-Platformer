#pragma once
#include "Tile.h"
#include <array>

using std::array;

class World
{
public:
	World();
	void load(SDL_Renderer* renderer);
	void draw(SDL_Renderer* renderer);
	void clean();

private:
	TileData grass;
	TileData sand;
	TileData rock;

	array < array<Tile*, 25>, 20> grid;
	array < array<Tile*, 25>, 20> generate();
	TileData* chooseTileData(int i);
};
