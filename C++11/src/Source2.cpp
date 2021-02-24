#include <iostream>
#include <memory>
#include <vector>
#include <chrono>

extern int a1();
extern float aVariable;

extern int a2();


enum class Bli
{
	RUN,
	JUMP,
	STAY
};

struct TestStruct
{
	int a = 2;
	float b = 3.1416f;
	char c = 'S';
	Bli state = Bli::RUN;
};

void Testing(TestStruct shuvo = TestStruct())
{
	std::cout << shuvo.a << " " << shuvo.b << " " << shuvo.c << std::endl;
	if (shuvo.state == Bli::RUN)
	{
		std::cout << "RUN run ruhhhn" << std::endl;
	}
}

int main()
{
	//std::cout << a1() << " " << aVariable << " " << a2();
	{
		std::chrono::time_point<std::chrono::high_resolution_clock> bla;
		bla.min();
		using clock = std::chrono::high_resolution_clock;
		auto strt = clock::now();
		for (unsigned int i = 0; i < 100000; i++) {}
		auto finish = clock::now();
		auto dur = finish - strt;
		std::cout << dur.count() << std::endl;
	}

	{
		/*TestStruct shuvo = { 1000, 2000.0f, 'A' };
		std::cout << shuvo.a << " " << shuvo.b << " " << shuvo.c << std::endl;
		if (shuvo.state == Bli::RUN)
		{
			std::cout << "RUN" << std::endl;
		}*/

		//Testing();
	}

	{
		int value1 = 100;
		int const value2 = 200;
		int* const ptr1 = &value1;
		//int* ptr2 = &value2;
	}

	{
		std::vector<unsigned int> attachments;
		attachments.push_back(120);
		attachments.push_back(22);
		unsigned int* poi = (unsigned int*) &attachments[0];
		std::cout << *poi << std::endl;
		std::cout << *(poi + 1) << std::endl;
	}

	std::cout << "Hello world" << std::endl;

	int* pInt = new int(13);
	std::auto_ptr<int> apInt(new int);
	*apInt = 420;
	std::cout << *apInt << std::endl;
	
	return 0;
}