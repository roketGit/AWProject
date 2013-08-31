#include "game_engine.h"
#include "game.h"

using namespace std;

game_engine::game_engine(game* g) : engine(g)
{
	get_console()->prompt("Game engine creation : OK\n");
}

game_engine::~game_engine()
{
	get_console()->prompt("Game engine destruction : OK\n");
}

void game_engine::frame()
{
	int a;
	cout << "CACA ? [1/0]" << endl;
	cin >> a;
	get_parent()->stop_PLZ();
}
