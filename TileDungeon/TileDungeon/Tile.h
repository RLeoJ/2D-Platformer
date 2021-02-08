#pragma once
#include "TileData.h"
class Tile
{
public:
	Tile(int worldXP, int worldYP, TileData* dataP);
	void draw(SDL_Renderer* renderer);

private:
	int worldX;
	int worldY;
	TileData* data;

	const int SIZE = 32;
};
