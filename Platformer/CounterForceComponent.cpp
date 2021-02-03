#include "CounterForceComponent.h"
#include "Maths.h"

CounterForceComponent::CounterForceComponent(Actor* ownerP, float gravityf, float dragf, int updateOrderP)
	: Component(ownerP, updateOrderP), gravity(gravityf), drag(dragf)
{

}

void CounterForceComponent::AddGravity(float gravityF, float dt)
{
	gravity = gravityF;
	Vector2 oldPosition = owner.getPosition();
	Vector2 newPosition = Vector2(oldPosition.x, oldPosition.y + gravity * dt);
	owner.setPosition(newPosition);	
}

void CounterForceComponent::AddDrag(float dragF, float dt)
{
	drag = dragF;
	Vector2 oldPosition = owner.getPosition();
	Vector2 newPosition = Vector2(oldPosition.x - drag * dt, oldPosition.y);
	owner.setPosition(newPosition);
}