#include <stdio.h>

void main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("no composite or prime");
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                printf("%d is a composite number", n);
                return;
            }
        }
    }
    printf("%d is a prime number", n);
}