#include<stdio.h>
int main()
{
    int size,i,j;
    printf("enter array size: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("input %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are:\n");
     
     for (int i = 0; i < size; i++)
     {
        int unq = 1;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j] )
            {
                unq = 0;
                break;
            }
            
        }

        if (unq)
        {
            printf("%d ", arr[i]);
        }
        
        
     }
     
    
    
}