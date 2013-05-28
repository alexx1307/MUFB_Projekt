#pragma once
#include "Model.h"
#include "ModelStructData.h"
class ModelGenerator
{
public:
	ModelGenerator(void);
	~ModelGenerator(void);

	Model generate(ModelStructData modelData)=0;
};

