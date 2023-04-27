#pragma once

#include "common.h"

extern void initBackground(void);
extern void initFonts(void);
extern void initHighscoreTable(void);
extern void initSounds(void);
extern void initStarfield(void);
extern void loadMusic(const char* filename);
extern void playMusic(int loop);

extern App app;


