#include <stdio.h>

int main() {
    int choice, quantity;
    float total_price, amount_paid, change;
    char order_again;

    do {
        // Welcome and Menu
        printf("Welcome to our Tea Stall Counter! Our menu:\n");
        printf("1. Tea --------------------- Rs. 10\n");
        printf("2. Coffee ------------------ Rs. 20\n");
        printf("3. Cold Coffee ------------- Rs. 50\n");
        printf("4. Exit\n");

        // Prompt user to choose an option
        printf("Choose by entering a number (1-4): ");
        scanf("%d", &choice);

        // Process choice
        switch (choice) {
            case 1: // Tea
                printf("How many cups of refreshing tea? ");
                scanf("%d", &quantity);
                total_price = quantity * 10;
                break;
                
            case 2: // Coffee
                printf("How many cups of aromatic coffee? ");
                scanf("%d", &quantity);
                total_price = quantity * 20;
                break;

            case 3: // Cold Coffee
                printf("How many cups of chilled cold coffee? ");
                scanf("%d", &quantity);
                total_price = quantity * 50;
                break;

            case 4: // Exit
                printf("Thank you for visiting! We look forward to serving you again soon!\n");
                return 0;

            default:
                printf("Invalid choice. Please select a number between 1 and 4.\n");
                continue;
        }

        // Display total price and process payment
        printf("Total for %d cup(s): Rs. %.2f\n", quantity, total_price);
        printf("Enter your payment amount: Rs. ");
        scanf("%f", &amount_paid);

        if (amount_paid < total_price) {
            printf("Insufficient amount. Please pay at least Rs. %.2f.\n", total_price);
            continue;
        }

        change = amount_paid - total_price;
        printf("Change: Rs. %.2f\n", change);

        // Ask if the user wants to order again
        printf("Explore more or finalize? (Type 'Y' for Yes or 'N' for No): ");
        scanf(" %c", &order_again); // Space before %c to consume leftover newline character

    } while (order_again == 'Y' || order_again == 'y');

    printf("Thank you for visiting! We look forward to serving you again soon!\n");

    return 0;
}
