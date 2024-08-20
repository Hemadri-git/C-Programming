#include<stdio.h>
int main()
{
    int n;
    printf("enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("input %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        
    }
    printf("MAX elements in array is %d", max);
    
    
}