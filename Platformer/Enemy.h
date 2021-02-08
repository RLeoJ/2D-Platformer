#pragma once
#include "Actor.h"

class Enemy : public Actor
{
public:
	Enemy();

protected:
	float range;
	float damage;
};
