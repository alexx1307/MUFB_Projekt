#pragma once
#include "Vector.h"
struct StartConditions
{
	double angle;
	//Vector pos; <-pozycja startowa
	Vector velocity;

	StartConditions(void);
	~StartConditions(void);
};

