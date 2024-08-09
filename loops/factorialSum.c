#include <stdio.h>

int main()
{
    int n;
    long long sum = 0;
    printf("Enter the number of terms in the factorial series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        long long fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum += fact;
    }

    printf("The sum of the factorial series up to %d terms is: %lld\n", n, sum);

    return 0;
}
