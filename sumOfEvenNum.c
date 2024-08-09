#include<stdio.h>
int main()
{
    int number, evenSum=0;

    printf("enter number: ");
    scanf("%d", &number);
    
     printf("The even numbers are ");
    for (int i = 1; i <= number*2; i++)
    {
       
        if(i%2==0){
            printf("%d ",i);
            evenSum += i;
   
        }
            
    }

     printf("\nThe Sum of even Natural Number upto 5 terms : %d", evenSum);
    
}