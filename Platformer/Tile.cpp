#include "Tile.h"
#include "Assets.h"

Tile::Tile() :
	Actor(),
	sprite(nullptr),
	tileState(TileState::Pass)
{
	sprite = new SpriteComponent(this, Assets::getTexture(""));	
}

void Tile::setTileState(TileState tileStateP)
{
	tileState = tileStateP;
	updateTexture();
}

void Tile::updateTexture()
{
	std::string text;
	switch (tileState)
	{
	case TileState::Block:
		text = "GroundTile";
		break;
	case TileState::Pass:
		text = "";
		break;
	}
	sprite->setTexture(Assets::getTexture(text));
}