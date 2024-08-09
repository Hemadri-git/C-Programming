// Write a C program that asks the user to input a three-digit integer and calculates the sum of its digits. Using While loop.

#include <stdio.h>
int main()
{
    int rem, num, sum = 0;

    printf("enter 3 digit number: ");
    scanf("%d", &num);

    while (num)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of 3 digits: %d", sum);
}