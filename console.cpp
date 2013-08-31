#include "console.h"
#include "game.h"

using namespace std;

console::console(game* g) : parent(g)
{
}

console::~console()
{
}

void console::prompt(string a)
{
	cout << a;
}
