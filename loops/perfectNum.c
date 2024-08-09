#include <stdio.h>

int main()
{
    int number, sum = 0;

    printf("Enter a number: ");
   scanf("%d", &number);
    
    int i = 1;
    while (i <= number / 2)
    {
        if (number % i == 0)
        {
            sum += i;
        }
        i++;
    }

    if (sum == number)
    {
        printf("%d is a Perfect number.\n", number);
    }
    else
    {
        printf("%d is not a Perfect number.\n", number);
    }

    return 0;
}
