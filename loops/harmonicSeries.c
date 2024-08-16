#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;  // To store the sum of the series

    // Prompt the user to enter the number of terms
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the harmonic series
    printf("Harmonic Series: ");
    for (int i = 1; i <= n; i++) {
        // Calculate the ith term with alternating signs
        double term = (i % 2 == 0) ? -1.0 / i : 1.0 / i;

        // Print the term
        if (i == 1) {
            printf("%.0f", term);  // Print 1 without decimal point
        } else if (term > 0) {
            printf(" + %.0f/%d", term * i, i);  // Print positive fractions
        } else {
            printf(" - %.0f/%d", -term * i, i);  // Print negative fractions
        }

        // Add the term to the sum
        sum += term;
    }

    // Print the sum of the series
    printf("\nSum of the series: %.6f\n", sum);

    return 0;
}
