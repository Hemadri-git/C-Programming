#include <stdio.h>

int main() {
    int number, sum, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 9) {
        sum = 0;
        while (number > 0) {
            digit = number % 10;
            sum += digit;
            number /= 10;
        }
        number = sum;
    }

    printf("The single digit sum is: %d\n", number);

    return 0;
}
