#pragma once
#include "Window.h"

class Game
{
private:
	Window* window = NULL;

	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

	//flag that specifies if we should quit the game
	bool quit;

	//Event handler
	SDL_Event e;

public:
	//constructors and destructors
	Game();
	~Game();

	//Main game loop
	void mainLoop();
};

