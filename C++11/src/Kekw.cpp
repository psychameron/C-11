#include "Kekw.h"
#include <iostream>

int Kekw::uwu;

Kekw::Kekw()
{
	m_int = nullptr;
	m_size = 0;
	std::cout << "constructor" << std::endl;
}

Kekw::Kekw(int sz)
{
	m_int = new int[sz];
	m_size = sz;
	std::cout << "constructor" << std::endl;
}

Kekw::Kekw(const Kekw & that)
{
	m_int = new int[that.m_size];
	m_size = that.m_size;
	std::cout << "Copy constructor" << std::endl;
}

Kekw::Kekw(Kekw && that)
{
	std::cout << "move constructor" << std::endl;
	m_int = that.m_int;
	that.m_int = nullptr;
}

Kekw::~Kekw()
{
	delete []m_int;
	std::cout << "Destructor" << std::endl;
}
