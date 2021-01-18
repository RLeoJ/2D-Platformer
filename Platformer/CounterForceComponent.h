#pragma once
#include "Component.h"

class CounterForceComponent : public Component
{
public:
	CounterForceComponent(Actor* ownerP, float gravityF, float dragF, float downF, float forwardF);
	CounterForceComponent() = delete;
	CounterForceComponent(const CounterForceComponent&) = delete;
	CounterForceComponent& operator =(const CounterForceComponent&) = delete;

	void AddGravity(float gravityF, float dt);
	void AddDrag(float dragF, float dt);

private:
	float gravity = 9.8f;
	float drag = 5.0f;
	float down;
	float forward;
};
