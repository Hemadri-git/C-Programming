#include <stdio.h>
int main() {
    int arr[10]; 
    int i, n, sum=0;
    
    printf("enter number: ");
    scanf("%d", &n);

   
    printf("Input elements in the array:\n");
    for(i = 0; i < n ; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n sum of array are: ");
    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    printf("%d ", sum);


    return 0;
}
