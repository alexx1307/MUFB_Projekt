#pragma once
#include "particle.h"
#include "Vector.h"
//typ czasteczki ktora mozemy sterowac ( na poczatku)
class Bullet :
	public Particle
{
	Vector velocity;

public:
	Bullet(void);
	~Bullet(void);

	//do zaimplementowania
	void setPosition(Vector position);
	void setVelocity(Vector velocity);
};

