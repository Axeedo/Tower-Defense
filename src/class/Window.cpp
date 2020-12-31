#include "Window.h"
#include <stdio.h>

bool Window::init()
{
    bool success = true;

    //Create window
    _window = SDL_CreateWindow("Tower Defense", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    if (_window == NULL)
    {
        printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
        success = false;
    }
    else
    {
        //Create renderer for window
        _renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED);
        if (_renderer == NULL)
        {
            printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
            success = false;
        }
        else
        {
            //Initialize renderer color (to black)
            SDL_SetRenderDrawColor(_renderer, 0x0, 0x0, 0x0, SDL_ALPHA_OPAQUE);

            //Initialize PNG loading with SDL_image
            /*int imgFlags = IMG_INIT_PNG;
            if (!(IMG_Init(imgFlags) & imgFlags))
            {
                printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
                success = false;
            }*/
        }
    }
    return success;
}

void Window::update(SDL_Texture* texture)
{
    //clear screen
    SDL_RenderClear(_renderer);

    //Render texture
    SDL_RenderCopy(_renderer, texture, NULL, NULL);

    //Update screen
    SDL_RenderPresent(_renderer);
}

void Window::close()
{
	//Destroy window
	SDL_DestroyWindow(_window);
    _window = NULL;

    //Destroy Renderer
    SDL_DestroyRenderer(_renderer);
    _renderer = NULL;
}