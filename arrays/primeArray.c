#include<stdio.h>

int main()
{
    int a[10], n, c=0,i, j;
    printf("enter number ");
    scanf("%d" , &n);
    
    printf("input as: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

      printf("output as: ");
    for (int i = 0; i < n; i++)
    {
      for (c = 0, j = 1; j <= n; j++)
      {
         if (a[i]%j == 0)
         {
            c++;
         }
      }
      if (c==2)
         {
            printf("%d ", a[i]);
         }
         
      
    }
  
    

}