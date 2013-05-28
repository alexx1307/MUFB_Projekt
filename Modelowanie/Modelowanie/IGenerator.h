#pragma once
//pod ten interejs bedziemy podpinac nasze generatory
class IGenerator
{
public:
	IGenerator(void);
	~IGenerator(void);

	virtual void start(int seed)=0;
	virtual int nextInt()=0;
};

