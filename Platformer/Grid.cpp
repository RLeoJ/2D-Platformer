#include "Tile.h"
#include "Grid.h"

Grid::Grid() : Actor(), selectedTile(nullptr)
{
	// 7 rows, 16 columns
	tiles.resize(NB_ROWS);
	for (size_t i = 0; i < tiles.size(); i++)
	{
		tiles[i].resize(NB_COLS);
	}

	// Create tiles
	for (size_t i = 0; i < NB_ROWS; i++)
	{
		for (size_t j = 0; j < NB_COLS; j++)
		{
			tiles[i][j] = new Tile();
			tiles[i][j]->setPosition(Vector2(TILESIZE / 2.0f + j * TILESIZE, START_Y + i * TILESIZE));
			tiles[i][j]->setTileState(Tile::TileState::Pass);
			tiles[i][7]->setTileState(Tile::TileState::Block);
		}
	}

}