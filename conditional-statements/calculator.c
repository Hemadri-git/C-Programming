#include <stdio.h>

int main() {
    int num1, num2;
    char operation;

    // Prompt the user to enter two numbers
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    // Prompt the user to enter the operation
    printf("Enter operation (+, -, *, /, %%): ");
    scanf(" %c", &operation);

    // Use switch-case to perform the operation
    switch (operation) {
        case '+':
            printf("Addition is: %d\n", num1 + num2);
            break;
        case '-':
            printf("Subtraction is: %d\n", num1 - num2);
            break;
        case '*':
            printf("Multiplication is: %d\n", num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                printf("Division is: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            // Check for modulus by zero
            if (num2 != 0) {
                printf("Modulus is: %d\n", num1 % num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }

    return 0;
}
