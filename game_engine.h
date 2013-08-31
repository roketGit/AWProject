#ifndef DEF_GE_H
#define DEF_GE_H

#include <iostream>
#include "engine.h"

class game_engine : public engine 
{
public:

	game_engine(game*);
	~game_engine();

	void frame();
	
};


#endif
