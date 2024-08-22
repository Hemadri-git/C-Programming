#include<stdio.h>

int main()
{
    int a[5], n, even, odd, i;
    printf("enter array size number: ");
    scanf("%d", &n);
    
    printf("input elements: ");
    for (int  i = 0; i < n; i++)
    {
        
        scanf("%d", &a[i]);
    }
    
    printf(" even elements: ");
    for (even = i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
          printf("%d ", a[i]);
        }
        
    }

    printf("\n odd elements: ");
    for (odd = i = 0; i < n; i++)
    {
        if (a[i]%2!=0)
        {
          printf("%d ", a[i]);
        }
        
    }
    
    

}