#include "Game.h"

bool debug = true;

void init()
{
	bool running = true;
	if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		fprintf(stderr, "Failed to initialize SDL\n");
	}

	SDL_Window * window = SDL_CreateWindow("Macross", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, 0);

	if(window && debug)
	{
		printf("Window successfully initialized\n");
	}

	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);

	if(renderer && debug)
	{
		printf("Renderer successfully initialized\n");
	}

	SDL_Event e; 

	while(running)
	{
		while(SDL_PollEvent(&e))
		{
			switch(e.type) {
				case SDL_KEYDOWN:
					running = false;
					SDL_DestroyWindow(window);
					SDL_DestroyRenderer(renderer);

					SDL_Quit();
					break;
			}
		}
	}
}
