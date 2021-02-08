#pragma once
#include "World.h"

class Game 
{
public:
	void load();
	void Inputs();
	bool update();
	void draw();
	void close();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;

	World world;
};
