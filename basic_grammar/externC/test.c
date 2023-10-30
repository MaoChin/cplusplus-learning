#include "externC.h"
#include <stdio.h>

int main()
{
  int a = 1;
  int b = 2;
  printf("a + b = %d\n", Add(a, b));
  return 0;
}
