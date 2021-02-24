#include <iostream>
#include <string>
#include <vector>
#include "PointLight.h"

template<typename T>
T adder(T v) {
	std::cout << "ooh la la" << std::endl;
	return v;
}

template<typename T, typename... Args>
T adder(T first, Args... args) {
	return first + adder(args...);
}

template<typename aType, typename bType>
void PrintSomething(aType a, bType b)
{
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

template<typename T>
void lul()
{
	std::cout << "float" << std::endl;
}
template<>
void lul<float>()
{
	std::cout << "klu" << std::endl;
}

enum class Color
{
	RED,
	YELLOW,
	BLUE
};

enum class Fruit
{
	AAM,
	KOLA,
	APEL
};

enum Kalar
{
	RAD,
	EALO,
	BLU
};


void ShowMe(std::string& tool)
{
	std::cout << tool << std::endl;
	std::cout << "lvalue reference" << std::endl;
}

void ShowMe(std::string&& tool)
{
	std::cout << tool << std::endl;
	std::cout << "rvalue reference" << std::endl;
}

int maiafkahhn()
{
	int a;
	int& b = a;
	int& c = b;

	a = 10;
	b = 200;
	c = 210;

	for (int i = 0; i < 5; i++)
	{
		int achete = 0;
		achete++;
		std::cout << achete << std::endl;
	}

	std::string firstName = "shuvo ";
	std::string lastName = "sarker";
	
	ShowMe(firstName + lastName);
	ShowMe(firstName);

	std::cin.get();
	return 0;
}

int main2()
{
	Color color = Color::RED;
	Fruit fruit = Fruit::KOLA;

	try {
		throw 10;
		std::cout << "HELLO\n";
	}
	catch (char *excp) {
		std::cout << "Caught " << excp;
	}
	catch (...) {
		std::cout << "Default Exception\n";
	}
	
	PointLight aPL = PointLight(420);

	std::cout << aPL.Gro() << std::endl;

	/*
	lul<float>();

	PrintSomething(420, std::string("holy"));

	float sum = adder(1, 2.5f, 3, 8, 7);
	std::cout << sum << std::endl;
	std::string s1 = "x", s2 = "aa", s3 = "bb", s4 = "yy";
	std::string ssum = adder(s1, s2, s3, s4);

	std::cout << ssum << std::endl;
	*/
	std::cin.get();
	return 0;
}