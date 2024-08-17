#include <stdio.h>
int main() {
    int arr[10]; 
    int i, n;
    


    printf("enter number: ");
    scanf("%d", &n);

   
    printf("Input elements in the array:\n");
    for(i = 0; i < n ; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    for(i = 0; i < n; i++) {
        
        printf("%d ", arr[i]);
    }

     printf("\nElements in reverse array are: ");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
