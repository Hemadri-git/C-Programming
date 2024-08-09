#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, next, i = 1;

    printf("Enter how many Fibonacci series you want: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Fibonacci series up to %d terms:\n", n);

        printf("%d ", a);

        while (i < n)
        {
            if (i == 1)
            {
                printf("%d ", b);
            }
            else
            {
                next = a + b;
                a = b;
                b = next;
                printf("%d ", next);
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}
