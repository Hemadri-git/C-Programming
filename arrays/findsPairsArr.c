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

    int target;
    printf("Enter target element: ");
    scanf("%d", &target);

    printf("Output as: \n");
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                printf("(%d,%d)\n", a[i], a[j]);
            }
            
        }
        
    }
    
    
}