#pragma once
#include "ISolver.h"
#include "StartConditions.h"
class GeneticSolver : public ISolver
{
public:
	GeneticSolver();
	~GeneticSolver(void);

	void setModel(Model model);
	StartConditions* Solve();
};

