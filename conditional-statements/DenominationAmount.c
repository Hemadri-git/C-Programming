//Write a C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount. How to the minimum number of notes required for the given amount in C programming. Program to find minimum number of notes required for the given denomination. Logic to find minimum number of denomination for a given amount in C program


#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n/500!=0) printf("%d-no of 500\n",n/500);
    n=n%500;
    
    if(n/200!=0) printf("%d-no of 200\n",n/200);
    n=n%200;

    
    if(n/100!=0) printf("%d-no of 100\n",n/100);
    n=n%100;

    
    if(n/50!=0) printf("%d-no of 50\n",n/50);
    n=n%50;

    
    if(n/20!=0) printf("%d-no of 20\n",n/20);
    n=n%20;

    
    if(n/10!=0) printf("%d-no of 10\n",n/10);
    n=n%10;

    
    if(n/5!=0) printf("%d-no of 5\n",n/5);
    n=n%5;

    if(n/2!=0) printf("%d-no of 2\n",n/2);
    n=n%2;

    if(n/1!=0) printf("%d-no of 1\n",n/1);
    n=n%1;


}