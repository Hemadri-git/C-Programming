#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter number: ");
    scanf("%d", &n);
    int evenSum=0, oddSum=0;
    
    while (i<=n)
    {
        if (n%2 == 0)
        {
           evenSum+=n;
        }
        else{
            oddSum+=n;
        }
        n--;
        
        
    }
    printf("sum of odd: %d\nsum of even: %d", oddSum, evenSum );
    
    

    
}