#include <iostream>

namespace Asp
{
	void func()
	{
		std::cout << "Hello" << std::endl; //Hello ���� ���, endl�� �̿��Ͽ� �ٹٲ� ���
	}
}
namespace Bsp 
{
	void func()
	{
		std::cout << "Hi\n"; //Hi��� ���� ���, \n�� �̿��Ͽ� �ٹٲ� ���
	}
}
int main()
{
	Asp::func(); //Aspace�� �ִ� func �Լ� ȣ��
	Bsp::func(); //Bspace�� �ִ� func �Լ� ȣ��

	return 0;
}

