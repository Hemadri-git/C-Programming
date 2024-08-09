
#include <stdio.h>

int main() {
    int n, i;
    int term = 0; // To store the current term in the series
    int sum = 0;  // To store the sum of the series

    // Prompt the user to enter the number of terms
    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    // Loop to calculate each term and add to sum
    for (i = 1; i <= n; i++) {
        term = term * 10 + 1; // Generate the current term
        printf("%d ", term);  // Print the current term
        if (i < n) printf("+ ");
        sum += term;          // Add the current term to the sum
    }

    printf("\nThe Sum is: %d\n", sum);

    return 0;
}
