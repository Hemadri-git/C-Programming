#include <stdio.h>
int main()
{
    int n, i, j, k, c1, c2;

    printf("Enter a number ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++)
    {

        for (j = 1; j <= n; j++)
        {

            c1 = c2 = 0;
            if (i + j == n)
            {
                for (k = 1; k <= i || k <= j; k++)
                {
                    if (i % k == 0)
                        c1++;
                    if (j % k == 0)
                        c2++;
                }

                if (c1 == 2 && c2 == 2)
                {
                    printf("%d + %d = %d\n", i, j, i + j);
                }
            }
        }
    }
}