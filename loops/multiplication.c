#include <stdio.h>

int main()
{

   int n;

   printf("enter a number:  ");
   scanf("%d", &n);

   printf("multiplication table for %d:\n", n);

   int i = 1;
   while (i <= 10)
   {
      printf("%d x %d = %d\n", n, i, n * i);
      i++;
   }
}
