
#include <stdio.h>
int main()
{
    int n;
    printf("enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("input %d elements", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array in ascending :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
}