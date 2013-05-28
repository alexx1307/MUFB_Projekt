#pragma once
#include "Vector.h"
class ModelStructData
{
	double width,height;
	//dwa punkty tworza bramke przez ktora ma przeleciec bullet
	Vector aimGate[2]; 
public:
	ModelStructData(void);
	~ModelStructData(void);
};

