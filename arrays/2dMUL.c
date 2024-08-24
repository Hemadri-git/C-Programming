#include<stdio.h>
int main()
{
    int n;
    printf("enter n*n matrices: ");
    scanf("%d", &n);

    int a[n][n], b[n][n];

    printf("input first matrices : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("elements - [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        
    }

     printf("input second matrices :\n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("elements - [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
        
    }

     printf("output first matrices : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            printf("%d ", a[i][j]);
        }
        printf("\n");
        
    }

     printf("output second matrices : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            printf("%d ", b[i][j]);
        }
        printf("\n");
        
    }

    printf("output multiplication matrices : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            printf("%d ", a[i][j] * b[i][j]);
        }
        printf("\n");
        
    }
    
}