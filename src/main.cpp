/*
 * main.cpp
 *
 *  Created on: 19 Apr 2015
 *      Author: George
 */

#include "SDL2/SDL.h"
#include <stdio.h>

int main(int argc, char* argv[]) {

    SDL_Window *window;                    // Declare a pointer

    SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

    // Create an application window with the following settings:
    window = SDL_CreateWindow(
        "An SDL2 window",                  // window title
        SDL_WINDOWPOS_UNDEFINED,           // initial x position
        SDL_WINDOWPOS_UNDEFINED,           // initial y position
        640,                               // width, in pixels
        480,                               // height, in pixels
        SDL_WINDOW_OPENGL                  // flags - see below
    );

    // Check that the window was successfully made
    if (window == NULL) {
        // In the event that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
        return 1;
    }

    bool gameRunning = true;
    double lastTime = SDL_GetTicks();

    while (gameRunning) {
    	double current = SDL_GetTicks();
    	double delta = current - lastTime;
    	//Handle Events Here

    	//Update Here passing delta as a parameter

    	//Render Here

    	lastTime = current;
    }

    // Close and destroy the window
    SDL_DestroyWindow(window);

    // Clean up
    SDL_Quit();
    return 0;
}
