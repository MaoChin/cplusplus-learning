#include <iostream>

int& Add(int a, int b)
{
	int c = a + b;
	return c;
}

int main()
{
	int& ret = Add(1, 2);
	std::cout << ret << std::endl;
	return 0;
}
