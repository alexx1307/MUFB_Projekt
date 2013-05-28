#pragma once

class ISimulation
{
	Model model;
public:
	//metoda zwraca wskaxnik do atkualnego stanu modelu
	Model* getModelState(){
		return &model;
	}
	//metoda wykonuje jedno odswiezenie modelu (do zzastosowania przy RT symulacji)
	bool virtual NextIteration(int deltaTime)=0;
};

