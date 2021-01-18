#pragma once
#include "Actor.h"
#include <vector>
#include "SpriteComponent.h"

class Tile : public Actor
{
	friend class Grid;
	enum class TileState
	{
		Pass,
		Block,
		Start,
		End,
		Death
	};

	Tile();

	TileState getTileState() const { return tileState; }
	void setTileState(TileState TileStateP);

private:
	void updateTexture();
	SpriteComponent* sprite;
	TileState tileState;
};
