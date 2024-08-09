#include<stdio.h>
int main()
{
    int num1, num2;
    printf("enter 2 number: ");
    scanf("%d %d", &num1, &num2);

    switch (num1>num2)
    {
    case 1: printf("%d is greater", num1);
        break;
    
    default: printf("%d is greater", num2);
        break;
    }

    
}