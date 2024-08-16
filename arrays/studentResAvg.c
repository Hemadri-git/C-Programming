#include<stdio.h>
#include<conio.h>
int main()
{
    int id, total=0, pass=1, sub[6];
    char name[20];
    float avg;

    printf("enter student id: ");
    scanf("%d", &id);
   
    printf("enter student name: ");
    scanf(" %s", name);
    printf("enter 6 marks ");

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &sub[i]);
        total += sub[i];
        if (sub[i]<35)
        {
            pass=0;
        }
      
    }
      
        avg = total/6.0;
        puts("Id \t Name \t Total \t Average \t Grade ");
        puts("-------------------------------------------------");
        printf("%d \t %s \t %d \t %.2f\t", id, name, total, avg);

        if (pass==0)
        {
            puts("failed");
        }
        else if(avg>=60)
        {
            puts("\t1st class");
        }
        else if (avg>=50)
        {
           puts("\tsecond class");
        }
        else{
            printf("3rd class");
        }
    
}