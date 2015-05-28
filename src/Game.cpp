/*
 * Game.cpp
 *
 *  Created on: 27 May 2015
 *      Author: George
 */

#include "Game.h"

Game::Game()
	:_mainWindow( NULL )
{

}

Game::~Game()
{
	SDL_DestroyWindow( _mainWindow );
}

void Game::CreateWindow ( SDL_Window* window, char* title, int width, int height, int posX, int posY )
{
	window = SDL_CreateWindow(
	        title,                  // window title
	        posX,           // initial x position
	        posY,           // initial y position
	        width,                               // width, in pixels
	        height,                               // height, in pixels
	        SDL_WINDOW_OPENGL                  // flags - see below
	    );

	// Check that the window was successfully made
	    if (window == NULL) {
	        // In the event that the window could not be made...
	        printf("Could not create window: %s\n", SDL_GetError());
	    }
}

void Game::Init ()
{
    SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

	CreateWindow( _mainWindow, "The title of the game", 800, 600, 200, 300 );
}

void Game::HandleEvents ( SDL_Event e )
{

}

void Game::Update ( float delta )
{

}

void Game::Render ()
{

}
