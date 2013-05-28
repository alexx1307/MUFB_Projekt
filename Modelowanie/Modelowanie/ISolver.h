#pragma once
#include "StartConditions.h"
#include "Model.h"
class ISolver
{
protected:
	Model model;
public:
	//ta metoda ma za zadanie ustawic aktualny model na podany w argumencie, 
	//ma utworzyc sobie w jakis sposob jego kopie i nie modyfikowac pierwotnego modelu
	virtual void setModel(const Model& model)=0;
	//metoda zwraca przykladowe warunki poczatkowe lub null jesli dany model nie ma rozwiazania
	virtual StartConditions* Solve()=0;
};

