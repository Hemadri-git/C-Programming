#include <stdio.h>

int main() {
    int number;
    int oddSum = 0, evenSum = 0;
    int digit;
    int position = 1; // Position counter to determine odd/even place

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop through the digits of the number
    while (number > 0) {
        digit = number % 10; // Extract the last digit

        if (position % 2 == 1) {
            oddSum += digit; // Add to odd position sum
        } else {
            evenSum += digit; // Add to even position sum
        }

        number /= 10; // Remove the last digit
        position++; // Move to the next position
    }

    // Print the result
    if (oddSum == evenSum) {
        printf("Alternate digit sum is same.\n");
    } else {
        printf("Alternate digit sum is not same.\n");
    }

    return 0;
}
