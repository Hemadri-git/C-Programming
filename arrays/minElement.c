#include <stdio.h>
int main()
{
    int n;
    printf("enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("input elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("min element: %d", min);
}