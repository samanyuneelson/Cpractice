//program to check whether a year is a leap year
//

#include <stdio.h>

int main ()
{
  int a;
  printf("Enter Year");
  scanf("%d\n", a);
  if (a%400 != 0) {
    printf("%d is a leap year\n", a);
  }
  else {
    printf("%d is not a leap year\n", a);
  }
}
