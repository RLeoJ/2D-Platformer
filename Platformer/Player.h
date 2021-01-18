#pragma once
#include "Actor.h"
#include <SDL_stdinc.h>

class Player : public Actor
{
public:
	Player();

	bool AmIGrounded() { return grounded; }

private:
	bool grounded;
};
