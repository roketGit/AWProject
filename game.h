#ifndef DEF_GAME_H
#define DEF_GAME_H

#include "game_engine.h"
#include "console.h"

class game
{
public:
	game();
	~game();
	
	void run();
	void stop_PLZ();

private:
	
	bool stillRunning;
	
	console *cons;

	game_engine *ge;
};

#endif
