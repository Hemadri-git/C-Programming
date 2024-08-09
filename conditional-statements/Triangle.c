#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter side1: \n");
    scanf("%d",&s1);
    printf("enter side2: \n");
    scanf("%d",&s2);
    printf("enter side3: \n");
    scanf("%d",&s3);
    
    if(s1<=0 && s2<=0 && s3<=0){
        printf("invalid number give positive numbers only \n");

    }
    else if (s1==s2 && s2==s3 && s1==s3)
    {
        printf("Equaillateral triangle");
    }
    else if (s1==s2 || s2==s3 ||  s1==s3)
    {
        printf("Isometric triangle");
    }
    else{
        printf("Scalane triangle");
       
    }
    
    
    
}