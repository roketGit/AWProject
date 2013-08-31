#include "game.h"

game::game()
{
	stillRunning = true;

	cons = new console(this);
	cons->prompt("Console creation : OK\n");
	
	ge = new game_engine(this);
	ge->attach_console(cons);

	cons->prompt("Game init : OK\n");
}

void game::run()
{
	while(stillRunning)
	{
		ge->frame();
	}
}

void game::stop_PLZ()
{
	cons->prompt("Stop interception : OK\n");
	stillRunning = false;
}

game::~game()
{
	cons->prompt("Game destruciton : OK\n");
	delete ge;
	delete cons;
}
