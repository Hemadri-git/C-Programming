#include<stdio.h>
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        
        printf("%d X %d = %d\n", number, i, number*i);
    }
    
}