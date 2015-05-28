/*
 * Game.h
 *
 *  Created on: 27 May 2015
 *      Author: George
 */

#ifndef SRC_GAME_H_
#define SRC_GAME_H_

#include "SDL2/SDL.h"
#include <stdio.h>

class Game {
public:
	Game ();
	virtual ~Game ();

	//setters
	void setWindow ( SDL_Window* window ) { _mainWindow = window; }

	//getters
	SDL_Window* getWindow () { return _mainWindow; }

	//functions
	void CreateWindow ( SDL_Window* window, char* title, int width, int height, int posX, int posY );

	void Init ();

	void HandleEvents ( SDL_Event e );
	void Update ( float delta );
	void Render ();
private:
	SDL_Window* _mainWindow;

};

#endif /* SRC_GAME_H_ */
