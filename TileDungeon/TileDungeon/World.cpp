#include "World.h"

World::World()
{
}

void World::load(SDL_Renderer* renderer)
{
	grass = TileData("grass.bmp", 1, renderer);
	sand = TileData("sand.bmp", 3, renderer);
	rock = TileData("rock.bmp", 6, renderer);
	grid = generate();
}

void World::draw(SDL_Renderer* renderer)
{
	for (auto row : grid)
	{
		for (auto tile : row)
		{
			tile->draw(renderer);
		}
	}
}

void World::clean()
{
	for (auto row : grid)
	{
		for (auto tile : row)
		{
			delete tile;
		}
	}
}

array<array<Tile*, 25>, 20> World::generate()
{
	array<array<int, 25>, 20> dataGrid
	{ {
		{1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1},
		{2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2},
		{3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3},
		{1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1},
		{2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2},
		{3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3},
		{1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1},
		{2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2},
		{3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3},
		{1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1},
		{2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2},
		{3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3},
		{1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1},
		{2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2},
		{3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3},
		{1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1},
		{2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2},
		{3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3},
		{1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1},
		{2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2}
	} };

	array<array<Tile*, 25>, 20> rGrid;

	for (int row = 0; row < 20; ++row)
	{
		for (int col = 0; col < 25; ++col)
		{
			TileData* type = chooseTileData(dataGrid[row][col]);
			rGrid[row][col] = new Tile(col, row, type);
		}
	}
	return rGrid;
}

TileData* World::chooseTileData(int i)
{

	switch (i)
	{
	case 1:
		return &grass;
	case 2:
		return &sand;
	case 3:
		return &rock;
	default:
		return &grass;
	}
}
