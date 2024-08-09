#include <stdio.h>

int main()
{
    int number, original, sum = 0, digit, i, fact;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number > 0)
    {
        digit = number % 10;

        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;

        number /= 10;
    }

    if (sum == original)
    {
        printf("%d is a strong number.\n", original);
    }
    else
    {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}
