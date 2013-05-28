#pragma once
#include "Vector.h"
class IPhysics;
class Particle
{
	static IPhysics physics;
	double mass;
	Vector position;
	Vector force;
public:
	Particle(void);
	~Particle(void);
	static void setPhysics(IPhysics physics);
	//metoda sluzaca do dodania nowej sily(wypadkowa)
	void addForce(Vector force);
	//ustalenie sily na zadana wartosc
	void setForce(Vector force);
	//przesuwa czasteczke (jesli jest bulletem) i aktualizuje dzialajaca sile
	void update(int deltaTime);
};

