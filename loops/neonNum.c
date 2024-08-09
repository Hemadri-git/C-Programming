#include<stdio.h>
int main()
{
    int number, sqr, sum =0, rem;
    printf("enter a number: ");
    scanf("%d", &number);

  
    sqr = number*number;
    while (sqr!=0)
    {
      rem = sqr%10;
      sum = sum+rem;
      sqr=sqr/10;
    }
    
    if (number==sum)
    {
        printf("noen number");

    }
    else
    {
      printf("not noen");
    }
    
    
    
}