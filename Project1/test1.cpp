#include <iostream>

namespace Asp
{
	void func()
	{
		std::cout << "Hello" << std::endl; //Hello 문구 출력, endl을 이용하여 줄바꿈 사용
	}
}
namespace Bsp 
{
	void func()
	{
		std::cout << "Hi\n"; //Hi라는 문구 출력, \n을 이용하여 줄바꿈 사용
	}
}
int main()
{
	Asp::func(); //Aspace에 있는 func 함수 호출
	Bsp::func(); //Bspace에 있는 func 함수 호출

	return 0;
}

