#pragma once

class Light
{
private:
	float m_Position;
	float m_Ambient;
	float m_Diffuse;
public:
	Light(float position, float ambient, float diffuse);
	Light() {} // empty constructor
	inline float GetPosition() const { return m_Position; }
	inline float GetAmbient() const { return m_Ambient; }
	inline float GetDiffuse() const { return m_Diffuse; }
};