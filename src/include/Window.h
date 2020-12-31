#pragma once
#include <SDL.h>

class Window
{
private:
	SDL_Window* _window = NULL;
	SDL_Renderer* _renderer = NULL;

	int width = 640;
	int height = 480;

public:
	//build the window
	bool init();

	//Update the window
	void update(SDL_Texture* texture);

	//Destroy the window
	void close();
};

