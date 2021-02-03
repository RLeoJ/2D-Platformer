#include "Player.h"
#include "SpriteComponent.h"
#include "Assets.h"
#include "Maths.h"
#include "InputComponent.h"
#include "CounterForceComponent.h"

Player::Player() : Actor()
{
	SpriteComponent* sc = new SpriteComponent(this, Assets::getTexture("Player"));
	InputComponent* ic = new InputComponent(this);
	ic->setMaxForwardSpeed(300.0f);
}