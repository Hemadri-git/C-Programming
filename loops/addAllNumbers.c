// Write a C program to add all the natural number from 1 to n. Ask the user to give n value and print the addition value.

#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("enter a number: ");
    scanf("%d", &num);

    int i = 1;

    while (i <= num)
    {
        sum = sum + num;
        num--;
    }
    printf("Sum of all digits: %d", sum);
}