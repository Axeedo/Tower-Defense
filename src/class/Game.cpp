#include "Game.h"
#include <SDL.h>
#include <stdio.h>


Game::Game()
{
	quit = false;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		quit = true;
	}

	//Initialize window
	window = new Window();

	if (!window->init()) {
		printf("Couldn't initialize window!");
		quit = true;
	}
}

Game::~Game()
{
	//clear window
	window->close();
	delete window;

	//Quit SDL subsystems
	SDL_Quit();
}

void Game::mainLoop() {
	while (!quit)
	{
		// TODO: game logic here

		while (SDL_PollEvent(&e) != 0)
		{
			//User requests quit
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
		}
	}
}