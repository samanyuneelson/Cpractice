//numberreverse

#include <stdio.h>

void main()
{
  int i,a,c,rev= 0;
  printf("enter number:");
  scanf ("%d", &a);
  printf("%d\n",a);
  while (a>0)
   {

    c = a%10;
    rev = rev*10 + c;
    a = a/10;
  }
printf("%d\n", rev );
}
