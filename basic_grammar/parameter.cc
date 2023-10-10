#include <iostream>

void func(int a = 11, int b = 22)
{
  std::cout << "a=" << a << std::endl;
  std::cout << "b=" << b << std::endl;
}
