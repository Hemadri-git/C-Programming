#include<stdio.h>
int main()
{
    int number, sum = 0, prod = 1, rem=0;

    printf("enter a number: ");
    scanf("%d", &number);

    while (number!=0)
    {
        rem = number%10;
        sum = sum + rem;
        prod = prod * rem;
        number/=10;
       
    }

    if (sum == prod)
    {
        printf("Spy Number");
    }
    else{
        printf("Not a spy number");
    }
    
    
}