#include "Tile.h"

Tile::Tile(int worldXP, int worldYP, TileData* dataP) :
	worldX(worldXP), worldY(worldYP), data(dataP)
{
}

void Tile::draw(SDL_Renderer* renderer)
{
	SDL_Rect drawrect{worldX * SIZE, worldY * SIZE, SIZE, SIZE};
	SDL_RenderCopy(renderer, data->getTexture(), nullptr, &drawrect);
}
