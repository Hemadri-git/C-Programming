#include <stdio.h>

void main() {
    float balance, amount;
    char transactionCode;

    // Ask the user to initialize the minimum balance
    printf("Enter the initial balance: ");
    scanf("%f", &balance);

    // Check if the balance is valid
    if (balance <= 0) {
        printf("Amount can't be stored.\n");
        return;
    }

    // Read the transaction code
    printf("Enter the transaction code (d for deposit, w for withdrawal): ");
    scanf(" %c", &transactionCode);  // Notice the space before %c to consume any trailing newline character

    switch (transactionCode) {
        case 'd':
            // Deposit operation
            printf("Enter the amount to deposit: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount.\n");
            } else {
                balance += amount;
                printf("Updated balance: %.2f\n", balance);
            }
            break;

        case 'w':
            // Withdrawal operation
            printf("Enter the amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= 0 || amount > balance) {
                printf("Invalid amount.\n");
            } else {
                balance -= amount;
                printf("Updated balance: %.2f\n", balance);
            }
            break;

        default:
            printf("Invalid transaction code.\n");
            break;
    }
}
