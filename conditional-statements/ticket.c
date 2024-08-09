#include <stdio.h>

int main() {
    int age;
    float height;
    char vipPass;
    float basePrice, finalPrice;
    
    // Prompt user for inputs
    printf("Enter age: ");
    scanf("%d", &age);
    
    if (age < 0) {
        printf("Error: Age cannot be negative.\n");
        return 1;
    }

    printf("Enter height in centimeters: ");
    scanf("%f", &height);

    if (height < 0) {
        printf("Error: Height cannot be negative.\n");
        return 1;
    }

    printf("Do you have a VIP pass? (y/n): ");
    scanf(" %c", &vipPass); // Added space before %c to consume any leftover newline character
    
    // Determine base ticket price based on age
    if (age <= 3) {
        basePrice = 0;
    } else if (age >= 4 && age <= 12) {
        basePrice = 20;
    } else if (age >= 13 && age <= 64) {
        basePrice = 100;
    } else if (age >= 65) {
        basePrice = 50;
    }

    // Adjust base price based on height
    if (height < 120) {
        basePrice *= 0.5; // 50% discount
    } else if (height > 180) {
        basePrice += 50; // Additional charge
    }

    // Apply VIP discount if applicable
    if (vipPass == 'y' || vipPass == 'Y') {
        finalPrice = basePrice * 0.9; // 10% discount
    } else {
        finalPrice = basePrice;
    }

    // Output results
    printf("\nCustomer's details:\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f cm\n", height);
    printf("VIP Pass: %c\n", vipPass);

    printf("\nBase Ticket Price: Rs. %.2f\n", basePrice);
    
    if (height < 120) {
        printf("Applied 50%% discount on base price.\n");
    } else if (height > 180) {
        printf("Applied additional Rs. 50 charge.\n");
    }

    if (vipPass == 'y' || vipPass == 'Y') {
        printf("Applied 10%% VIP discount.\n");
    }

    printf("Final Ticket Price: Rs. %.2f\n", finalPrice);

    return 0;
}
