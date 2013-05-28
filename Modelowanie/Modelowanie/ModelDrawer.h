#pragma once
#include "..\\SDL-1.2.15\include\SDL.h"
#include "Model.h"
class ModelDrawer
{
public:
	//metoda bedzie tworzyc bitmape 
	static SDL_Surface* convertToBmp(const Model& model,  const SDL_Rect& resolution);

};

