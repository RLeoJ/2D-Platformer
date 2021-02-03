#include "MoveComponent.h"
#include "Maths.h"
#include "Actor.h"
#include "Window.h"

MoveComponent::MoveComponent(Actor* ownerP, int updateOrderP)
	: Component(ownerP, updateOrderP), forwardSpeed(0.0f)
{
	
}

void MoveComponent::setForwardSpeed(float forwardSpeedP)
{
	forwardSpeed = forwardSpeedP;
}

void MoveComponent::update(float dt)
{
	if (!Maths::nearZero(forwardSpeed))
	{
		Vector2 oldPosition = owner.getPosition();
		Vector2 newPosition = Vector2(oldPosition.x + forwardSpeed * dt ,oldPosition.y) ;
		owner.setPosition(newPosition);
	}
}