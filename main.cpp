#pragma once
#include "SDL/SDL.h"

int main(int argc, char* argv[]) {
	SDL_CreateWindow("SDL2-Boiler plate", 300, 300, 300, 300, SDL_WINDOW_RESIZABLE);
	while (true) {};
	return 0;
}