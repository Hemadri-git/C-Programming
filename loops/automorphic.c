#include<stdio.h>
#include<math.h>
int main()
{
    int n, m, c=0, sqr, last;
    printf("enter a  number :");
    scanf("%d", &n);

    sqr = n*n;
    m=n;
    for(; m>0; m/=10 ){
        c++;
    }

    int d = floor(pow(10,c));
    last = sqr%d;

    if (n == last)
    {
        printf("autophormic");
    }
    else{
        printf("not");
    }
    

}