#include "Enemy.h"
#include "SpriteComponent.h"
#include "Assets.h"
#include "Maths.h"

Enemy::Enemy() : Actor()
{
	SpriteComponent* sc = new SpriteComponent(this, Assets::getTexture("Enemy"));
}

