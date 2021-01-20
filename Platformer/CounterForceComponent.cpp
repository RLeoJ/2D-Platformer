#include "CounterForceComponent.h"
#include "Maths.h"
#include "Actor.h"

CounterForceComponent::CounterForceComponent(Actor* ownerP, float gravityF, float dragF, float downf, float forwardf) 
	: Component(ownerP), gravity(gravityF), drag(dragF), down(downf), forward(forwardf)
{
	down = owner.getPosition().y;
}

void CounterForceComponent::AddGravity(float gravityF, float dt)
{
	gravity = gravityF;
	Vector2 newPosition = owner.getPosition().y + gravity * dt;
	owner.setPosition(newPosition);
}

void CounterForceComponent::AddDrag(float dragF, float dt)
{
	drag = dragF;
	Vector2 newPosition = owner.getPosition().x + drag * dt;
	owner.setPosition(newPosition);
}