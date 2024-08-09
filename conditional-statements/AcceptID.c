#include<stdio.h>
int main()
{
     int id;
   
   
    printf(" Enter your id: ");
    scanf("%d", &id);

    if(id<11 && id>23){
        printf(" Invalid Id \n");
    }else if (id>=11 && id<=15)
    {
        printf("Software department");
    }else if (id>=16 && id<=20)
    {
        printf("Developer department");
    }
    else if(id>=21 && id<=23){
        printf("Management department");
    }
    else{
        printf("invalid");
    }
    
    


}