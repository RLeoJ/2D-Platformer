#pragma once
#include <string>
#include <SDL.h>
class TileData
{
public:
	TileData();
	TileData(std::string filenameP, int movementCostP, SDL_Renderer* renderer);

	SDL_Texture* getTexture() const { return texture; };

private:
	SDL_Texture* texture;
	int movementCost;
};

//might change/add to tileData for damage tiles, healing tiles, teleport tiles, etc