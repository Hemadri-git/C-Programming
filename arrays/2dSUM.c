// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
  int n;
  printf("enter n*n matrices: ");
  scanf("%d", &n);
  
  int a[n][n], b[n][n];
  
  printf(" input elements for first matrices: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
       printf("elements - [%d][%d]: ", i, j);
       scanf("%d", &a[i][j]);
    }
    
  }
   printf("\n");

  printf(" input elements for second matrices: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
       printf("elements - [%d][%d]: ", i, j);
       scanf("%d", &b[i][j]);
    }
    
  }
  printf("\n");

  printf("First output as: \n ");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
       
       printf("%d ", a[i][j]);
    }
    printf("\n");
    
  }
  printf("\n");

   printf("Second output as: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
       
       printf("%d ", b[i][j]);
    }
    printf("\n");
    
  }
  printf("\n");

   printf("Addition of two matrices output as: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
       
       printf("%d ", a[i][j] + b[i][j]);
    }

    printf("\n");
    
  }
  printf("\n");
  
 
    
    return 0;
}