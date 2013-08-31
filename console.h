#ifndef DEF_CONS_H
#define DEF_CONS_H

#include <iostream>
#include <string>

class game;

class console
{
public:
	console(game*);
	~console();

	void prompt(std::string a);

private:
	game *parent;

};

#endif
