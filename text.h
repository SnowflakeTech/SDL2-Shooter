#pragma once

#include "common.h"

extern void blitRect(SDL_Texture* texture, SDL_Rect* src, int x, int y);
extern SDL_Texture* loadTexture(const char* filename);

