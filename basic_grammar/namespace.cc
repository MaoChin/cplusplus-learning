#include <iostream>
#include <cstdio>
#include <cstdlib>

namespace A
{
	int a = 10;
	int b = 20;
}
int main()
{
	// int a = 1;
	// int b = 2;
	// std::cout << a + b << std::endl;
	// std::cout << A::a + A::b << std::endl;
	// std::cout << rand << std::endl;
	// printf("%p\n", rand);
	// printf("%ld\n", rand);
	// return 0;

	// 报错
	// namespace mq
	// {

	// }

	// 大小端检验
	int num = 2;
	// Linux下是64位的，指针8byte
	printf("%ld\n", sizeof(&num));
	char* b = (char*)&num;

	printf("%p : %d\n", &num, num);
	printf("%p : %d\n", b, *b);
	// int 是4byte
	for(int i = 0; i < 4; ++i)
		printf("%p : %d\n", b+i, *(b+i));
}
