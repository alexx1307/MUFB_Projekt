#pragma once
#include "..\SDL-1.2.15\include\SDL.h"
class Application
{	
	SDL_Surface* mainFrame;
	bool isDone;
	
public:
	Application(void);
	~Application(void);
	
	void run();
};

