#include<stdio.h>
int main()
{
    int size;
    printf("enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("input %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Output as: \n");
    for (int i = 0; i < size/2; i++)
    {
         printf("pairs: (%d, %d)\n ", array[i] , array[size-i-1]);      
    }

      if(size%2 != 0)
    {
        printf("%d", array[size/2]);
    }
    
    
}