#include <stdio.h>
int main()
{
    long m, n;
    int c = 0, d, f = 0;
    printf("Enter Number: ");
    scanf("%ld", &n);
    m = n;

    printf("enter a digit to search: ");
    scanf("%ld", &d);

    do
    {
        c++;
        m = m / 10;
    } while (n != 0);

    do
    {
        if (n % 10 == d)
        {
            printf("%d in %d position\n ", d, c, f = 1);
            c--;
            n = n / 10;
        }
    } while (n != 0);

    if (f == 0)
    {
        printf("%d not found", d);
    }
}