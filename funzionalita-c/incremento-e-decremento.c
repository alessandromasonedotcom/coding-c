#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int c = 0;
  printf("%d\n", c++);
  printf("%d\n", c--);
  printf("%d\n", --c);
  printf("%d\n", ++c);
  system("pause");
  return 0;
}