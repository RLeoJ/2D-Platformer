#pragma once
#include "Actor.h"
#include <Vector>

class Grid : public Actor
{
public:
	Grid();

private:
	class Tile* selectedTile;

	//2D vector of tiles in grid
	std::vector<std::vector<class Tile*>> tiles;

	const size_t NB_ROWS = 16;
	const size_t NB_COLS = 16;

	//Start y position of top left corner
	const float START_Y = 32.0f;
	const float TILESIZE = 64.0f;
};