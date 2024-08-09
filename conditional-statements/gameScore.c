#include<stdio.h>
int main()
{
    char person1[40], person2[40];
    int person1Score, person2Score, diff;

    printf("enter person1 name: \n");
    scanf(" %s", person1);

    printf("enter person 1 score ");
    scanf("%d", &person1Score);

     printf("enter person2 name: \n");
    scanf(" %s", person2);

     printf("enter person 2 score ");
    scanf("%d", &person2Score);

    switch (person1Score>person2Score)
    {
    case 1: printf("person 1 is winner\n");
            diff = person1Score - person2Score;
            printf("won by: %d", diff);
        break;

    default: printf("person 2 is winner\n");
              diff = person2Score - person1Score;
            printf("won by: %d", diff);
        break;
    }

    


}