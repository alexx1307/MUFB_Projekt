#pragma once
#include "ISimulation.h"
#include "Model.h"
#include "StartConditions.h"

class IAutoSimulation
{
public:
	//zadaniem metody jest orzec czy z podanymi startConditions symulacja zakonczy sie poprawnie czy nie
	bool virtual Simulate(Model model, StartConditions startConditions)=0;    
};

