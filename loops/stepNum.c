#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, pd, cd, sn=1;

    printf("enter number: ");
    scanf("%d", &n);

    pd=n%10;
    n/=10;

    while (n!=0)
    {
        cd = n%10;
        if (abs(cd-pd)!=1)
        {
            sn=0;
            break;
        }
        
        pd = cd;
        n/=10;
    }

    if (sn)
    {
        printf("step number");
    }
    else{
        printf("not a step number");
    }
    
    
}