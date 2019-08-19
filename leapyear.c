//program to check whether a year is a leap year
//

#include <stdio.h>

int main ()
{
  int a,c,d,e;
  printf("Enter Year:");
  scanf("%d", &a);
  c = a%4;
  d = a%100;
  e = a%400;
  if (e == 0)
  {
      printf("%d is a leap year\n", a);
  }
  else if (c == 0) {
      printf("%d is not a leap year\n", a);
  }
  else if (d != 0){
      printf("%d is a leap year\n", a);
    }
  else {
    printf("%d is not a leap year\n", a);
  }
}
