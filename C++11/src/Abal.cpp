#include "Abal.h"
#include <iostream>

Abal::Abal(std::initializer_list<float> ini)
{
	for (auto iter = ini.begin(); iter != ini.end(); iter++)
	{

	}
	a = *(ini.begin());
	b = *(ini.begin() + 1);
	std::cout << "yeah allah" << std::endl;
}

Abal::Abal(float _a, float _b) 
{
	a = _a;
	b = _b;
}

Abal::Abal(float x)
{
	a = b = x;
}

void Abal::ShowValues()
{
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}
