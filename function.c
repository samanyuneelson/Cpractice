#include <stdio.h>

int max(int x, int y)
{
  if (x>y)
    return x;
  else
    return y;
}

int main ()
{
  int a = 10, b = 20;

  int m = max(a,b);

  printf("max is %d", m);
  return 0;
}
