#pragma once
#include "ModelStructData.h"
#include "Particle.h"
#include "Bullet.h"
//W tej klasie powinna sie znalezc lista czasteczek,
class Model
{
	//jakas implementacja listy czasteczek(stl)
	ModelStructData modelStruct;  //to pole zawiera informacje typu wymiary planszy, zakres koncowy (cel), maksymalny czas symulacji itd
	Bullet bullet;  //nasza wyszczegolniona czasteczka (moze zmieniac pozycje i ma predkosc
public:
	Model(void);
	~Model(void);
};

