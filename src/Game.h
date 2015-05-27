/*
 * Game.h
 *
 *  Created on: 27 May 2015
 *      Author: George
 */

#ifndef SRC_GAME_H_
#define SRC_GAME_H_

#include "SDL2/SDL.h"

class Game {
public:
	Game();
	virtual ~Game();

	//setters
	void setWindow(SDL_Window* window) { _mainWindow = window; }

	//getters
	SDL_Window* getWindow() { return _mainWindow; }

	//functions

private:
	SDL_Window* _mainWindow;

};

#endif /* SRC_GAME_H_ */
