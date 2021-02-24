#include <iostream>
#include <string>
#include <vector>

class Foo
{
public:
	int blablabla;

	Foo() { std::cout << "constructing" << std::endl; };
	Foo(int x) : blablabla(x) {};
	Foo(const Foo& other) = delete;
	//Foo& operator=(const Foo& foo) = delete;
	Foo& operator=(const Foo& foo) = delete;

	int GetBlablabla() const { return blablabla; }
	
	~Foo() { std::cout << "destructing" << std::endl; };
};



void GetNothing(Foo fal)
{
	std::cout << "nothing" << std::endl;
}

class Parent
{
public:
	int ulala;
	Parent(int x) : ulala(x) { 
		std::cout << "constructing parent" << std::endl; }
	Parent() = default;
	virtual void Hello() const { std::cout << "Hello parent, " << ulala << std::endl; }
};

class Child : public Parent
{
public:
	int lulala;
	Child() : Parent(420)
	{
		//Parent::Hello();
		std::cout << "Constructing child" << std::endl;
	}
};


int main23232()
{
	{
		Child a;
		std::cout << a.ulala << std::endl;
	}

	{
		int a1();
		std::cout << a1() << std::endl;
	}

	std::vector<int> a1{ 1, 2, 3, 4, 5 };
	std::vector<int> a2{ 422 };
	a2 = std::move(a1);

	std::cout << a1.size();

	//GetNothing(Foo());
	

	return 0;
}

float aVariable = 420.42f;

int a1()
{
	return 420;
}

int a2()
{
	return 2;
}