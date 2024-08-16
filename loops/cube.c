#include<stdio.h>
int main()
{
    int number, cube;

    printf("enter a number: ");
    scanf("%d", &number);

    for ( int i = 1; i <= number; i++)
    {
        cube = i*i*i;
    }
    printf("cube = %d", cube);
    
}