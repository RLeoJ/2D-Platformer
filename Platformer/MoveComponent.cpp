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
		Vector2 newPosition = owner.getPosition().x +  forwardSpeed * dt;
		owner.setPosition(newPosition);
	}
}