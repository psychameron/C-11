#include <iostream>
#include <string>
#include <vector>
#include "Abal.h"
#include "Kekw.h"
 
enum Direction
{
	UP, DOWN
};

int Aaa();
Kekw Bbb()
{
	Kekw kk(12);
	kk.uwu = 420;
	return kk;
}

void GetMe(Kekw lul)
{
	std::cout << lul.m_size << std::endl;

}

typedef std::vector<int>::iterator intIterator;

class String
{
private:
	char* m_Str;
	size_t m_Size;
public:
	String(const char* str)
	{
		m_Size = strlen(str);
		m_Str = new char[m_Size];
	}
	String(const String& other)
	{
		std::cout << "copy" << std::endl;
	}
	~String()
	{
		delete[] m_Str;
	}
};

class Enemy
{
private:
public:
	virtual void RunAI()
	{
		std::cout << "enemy runai" << std::endl;
	}
};

class Boss : public Enemy
{
private:
public:
	void RunAI()
	{
		std::cout << "boss runai" << std::endl;
	}
};

class GameEntity
{
	
};

class Bass
{
public:
	int* m_A;
	Bass(int a) 
	{
		std::cout << "constructing with value " << a << std::endl;
		m_A = new int;
		*m_A = a;
	}
	~Bass()
	{
		std::cout << "destructing with value " << *m_A << std::endl;
		 delete m_A;

	}
};

int main()
{
	std::vector<int> volll;
	volll.push_back(24);
	volll.push_back(212);
	std::pointer_safety as = std::pointer_safety::relaxed;
	
	constexpr int siz = 5;
	std::vector<int> vec(siz);

	{
		int* blu = new int;
		*blu = 21;
		if (blu) delete blu;
		blu = nullptr;
		delete blu;
		
		//delete blu;
	}

	{
		Bass taxi = Bass(52);
		Bass laxi = taxi;
		//taxi = Bass(152);
		//std::cout << *taxi.m_A << std::endl;
		std::cout << "wtf" << std::endl;
	}

	{
		Enemy* pEnemy = new Enemy;
		pEnemy->RunAI();
		delete pEnemy;
		pEnemy = new Boss;
		pEnemy->RunAI();
		Boss* pBoss = new Boss;
		pBoss->RunAI();
	}

	{//some 2d array things
		int row = 5;
		int col = 10;

		int** a2d = new int*[row];
		
		for (int r = 0; r < row; r++)
		{
			a2d[r] = new int[col];
		}

		// some data
		for (unsigned int r = 0; r < row; r++)
		{
			for (unsigned int c = 0; c < col; c++)
			{
				a2d[r][c] = r * c;
				std::cout << a2d[r][c] << " ";
			}
			std::cout << std::endl;
		}

		for (unsigned int r = 0; r < row; r++)
		{
			delete[] a2d[r];
		}
		delete[] a2d;;
	}

	//Kekw ob1(5);
	//Kekw ob2 = ob1;
	//Kekw ob3 = Bbb();
	{
		/* const and pointers */
		int x = 10;
		int y = 20;
		const int z = 30;
		const int* pData = &x;
		pData = &y;
		const int* pData2 = &z;
		int* const pData3 = &x;
		*pData3 = 42;
		
	}

	{
		int x = 10;
		int& aReference = x;
		aReference = 422;
	}
	
	{
		// casting
		int aInt = 2;
		
	}

	{
		String satar = String("shuvo");
		String satar2 = String("sasdfaff");
		String plag(satar2);
	}

	//std::cout << ob3.uwu << std::endl;
	{
		//Kekw blyat = Kekw(100);
		//GetMe(blyat);
		//std::vector<Kekw> vect;
		//vect.push_back(Kekw(20));
		//GetMe(Kekw(20));
		Kekw bal = Kekw();
		Kekw bal2 = Kekw();
		
	}

	int32_t cl = 3241231;

	std::cout << cl << std::endl;

	std::cin.get();
	return 0;
}












int main1()
{
	std::vector<int> aVector{ 1, 2, 3, 4, 5, 6, 7 };

	for (auto it = aVector.begin(); it != aVector.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	for (auto aItem : aVector)
	{
		std::cout << aItem << " ";
	}

	for (auto& another : aVector)
	{
		another = 5;
		std::cout << another << " ";
	}

	////////////////////////////
	std::cout << '\n';
	int a = {};
	std::cout << a << std::endl;

	//Abal ob1{ 1.2f, 3.34f };
	Abal ob2{ 3.1f, 42.1f };
	Abal obb(3.13f, 55.92f);
	//b1.ShowValues();
	ob2.ShowValues();
	//////////////////////
	Abal ob3 = Abal(29.65f);
	std::cout << std::endl << std::endl;
	ob3.ShowValues();
	Abal::uint myuint;
	myuint = 420;
	std::cout << myuint;

	std::cout << std::endl;
	std::cout << Aaa() << std::endl;
	std::cout << Aaa() << std::endl;
	std::cout << Aaa() << std::endl;

	std::cin.get();
	return 0;
}

int Aaa()
{
	static int lul = 0;
	lul++;
	return lul;
}