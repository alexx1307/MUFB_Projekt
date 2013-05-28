#pragma once
#include "Particle.h"

typedef void(*interactionType)(Particle&,Particle&);

class IPhysics
{
private:
	IPhysics(){}
public:
	//metoda statyczna (wskaznik na funkcje) ktora opisuje oddzialywanie
	static interactionType interaction;
};

