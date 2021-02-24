#pragma once

class Kekw
{
public:
	explicit Kekw();
	explicit Kekw(int sz);
	Kekw(const Kekw& that);
	Kekw(Kekw&& that);
	~Kekw();
	int* m_int;
	int m_size;
	static int uwu;
};
