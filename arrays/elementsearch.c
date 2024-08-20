#include<stdio.h>
int main()
{
    int n;
    printf("enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("input elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int ele, f=0;
    printf("enter element to search: ");
    scanf("%d", &ele);

    for (int i = 0; i < n; i++)
    {
        if (ele == a[i])
        {
            f=1;
        }
      
        
    }

    if (f)
    {
        printf("%d element found in array", ele);
    }
    else{
        printf("not found");
    }
    
    


}