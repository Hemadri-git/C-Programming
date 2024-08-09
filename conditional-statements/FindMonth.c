//Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program. 


#include<stdio.h>
int main()
{
    int  n;
    scanf("%d", &n);
    

    if(n==1||n==3||n==5|n==7||n==8||n==10||n==12) puts("31 Days");
    else if(n==4||n==6||n==9||n==11) puts("30 days");
    else if(n==2) puts("28/29 days");
    else("invalid");
}