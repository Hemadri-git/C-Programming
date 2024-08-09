#include<stdio.h>
int main()
{
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    switch (num%2)
    {
    case 0: printf("%d is EVEN", num);
        break;
    case 1: printf("%d is ODD", num);
       break;
        
     
    default: printf("invalid");
        break;
    }
}