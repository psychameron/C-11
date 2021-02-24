#include "PointLight.h"

PointLight::PointLight(int bla)
	:m_Bla(bla), Light(420, 20, 10)
{
}

float PointLight::Gro() const
{
	return GetPosition();
}
