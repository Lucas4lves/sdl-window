#ifndef GAME_H
#define GAME_H

#pragma once 
#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

void init();
void poll_events();
void update();
void render();

#endif
