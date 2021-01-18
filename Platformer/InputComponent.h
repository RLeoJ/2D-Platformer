#pragma once
#include "MoveComponent.h"
#include <SDL_stdinc.h>

class InputComponent : public MoveComponent
{
public:
	InputComponent(Actor* ownerP);
	InputComponent() = delete;
	InputComponent(const InputComponent&) = delete;
	InputComponent& operator=(const InputComponent&) = delete;

	void processInput(const Uint8* keyState);

	void setMaxForwardSpeed(float maxForwardSpeedP);
	void setForwardKey(int key);
	void setBackKey(int key);

private:
	float maxForwardSpeed;

	int forwardKey;
	int backKey;
};