#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array are: ");
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        if (num <= 1) {
            continue;  
        }
        int isPrime = 1;  

        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;  
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    return 0;
}
