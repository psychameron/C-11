#pragma once
#include <initializer_list>
#include <string>



class Abal
{
private:
	float a, b;
	std::string myString;
	char ch;
public:
	explicit Abal(std::initializer_list<float> ini);
	Abal(float _a, float _b);
	explicit Abal(float x);
	typedef unsigned int uint;
	void ShowValues();

	void showe();

	template<typename T>
	void lulu(unsigned int a);

	template<>
	void lulu<float>(unsigned int a);
};
