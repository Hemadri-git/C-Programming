#include<stdio.h>
int main()
{
    int a[2][3];

    printf("Input elements: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elements - [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("output as: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        
    }
    
    

}