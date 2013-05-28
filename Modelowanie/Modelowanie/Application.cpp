#include "Application.h"
#include "..\SDL-1.2.15\include\SDL.h"
#include "GeneticSolver.h"
Application::Application(void)
{
	mainFrame=NULL;
	isDone=false;
}


Application::~Application(void)
{
}

void Application::run(){
	
	SDL_Init( SDL_INIT_EVERYTHING );
    mainFrame = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );
    SDL_Flip( mainFrame );
	while( !isDone)
    {
		SDL_Event appEvent;
        while( SDL_PollEvent( &appEvent) )
        {
            if( appEvent.type == SDL_QUIT )
            {
                isDone= true;
            }
        }
    }

}
