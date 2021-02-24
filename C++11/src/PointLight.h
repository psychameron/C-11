#pragma once
#include "Light.h"

class PointLight : public Light
{
private:
	int m_Bla;
public:
	PointLight(int bla);
	float Gro() const;
};