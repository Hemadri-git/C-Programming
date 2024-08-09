// Write a C program that asks the user to input an integer and count the digts and print the count of the digits.

#include <stdio.h>
int main()
{
   long num;
   int count = 0;

   printf("enter a number:");
   scanf("%ld", &num);

   while (num != 0)
   {
      count++;
      num = num / 10;
   }
   printf("count of digits: %d", count);
}