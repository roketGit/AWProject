#include "engine.h"
#include "game_engine.h"
#include "console.h"


engine::engine(game *g) : master(g) 
{
	ge = NULL;
}

void engine::attach_game_engine(game_engine *e)
{
	ge = e;
}

void engine::attach_console(console *c)
{
	cons = c;
}

engine::~engine()
{

}
