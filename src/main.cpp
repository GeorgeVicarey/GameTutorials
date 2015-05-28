/*
 * main.cpp
 *
 *  Created on: 19 Apr 2015
 *      Author: George
 */

#include "SDL2/SDL.h"
#include <stdio.h>
#include "Game.h"

int main(int argc, char* argv[]) {
	Game* game = new Game();

	game->Init();

    bool gameRunning = true;
    double lastTime = SDL_GetTicks();

    SDL_Event e;

    while (gameRunning) {
    	double current = SDL_GetTicks();
    	double delta = current - lastTime;

    	while (SDL_PollEvent( &e ) != 0) {
    		if( e.type == SDL_QUIT){
    			gameRunning = false;
    		}

    		game->HandleEvents( e );
    	}

    	//Update Here passing delta as a parameter
    	game->Update( delta );

    	//Render Here
    	game->Render();

    	lastTime = current;
    }

    // Clean up
    SDL_Quit();
    return 0;
}
