#pragma once
#include <vector>
#include "Window.h"
#include "Renderer.h"
#include "Vector2.h"
#include "Actor.h"
#include "Timer.h"
#include "SpriteComponent.h"
#include "Grid.h"

class Game
{
public:
	static Game& instance()
	{
		static Game inst;
		return inst;
	}

	Game(const Game&) = delete;
	Game& operator+(const Game&) = delete;
	Game(Game&&) = delete;
	Game& operator+(Game&&) = delete;

	Renderer& getRenderer() { return renderer; }

private:
	Game() : 
		isRunning(true), isUpdatingActors(false), grid(nullptr){}
	
public:
	bool initialize();
	void load();
	void loop();
	void unload();
	void close();

	void addActor(Actor* actor);
	void removeActor(Actor* actor);

private:
	void processInput();
	void update(float dt);
	void render();

	Window window;
	bool isRunning;
	Renderer renderer;

	bool isUpdatingActors;
	vector<Actor*> actors;
	vector<Actor*> pendingActors;

	Grid* grid;
};
