#ifndef DEF_ENGINE_H
#define DEF_ENGINE_H

class game_engine;
class game;
class console;

class engine
{
public:
	engine(game*);
	virtual ~engine();
	
	virtual void frame() = 0;

	void attach_game_engine(game_engine *e);
	
	void attach_console(console *cons);

	inline game* get_parent() { return master; }
	inline console* get_console() { return cons; };
protected:

	game *master;

	game_engine *ge;
	console *cons;
};

#endif
