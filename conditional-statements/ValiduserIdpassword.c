#include <stdio.h>

void main() {
    int userId, password;
   
    
    // Predefined user ID and password
    const int validUserId = 1001;
    const int validPassword = 1010;

    // Prompt the user to enter their ID
    printf("Enter your user ID: ");
    scanf("%d", &userId);

    // Check if the entered user ID is valid
    switch (userId) {
        case 1001:
            // If the user ID is valid, ask for the password
            printf("Enter your password: ");
            scanf("%d", &password);

            // Check if the entered password is correct
            switch (password) {
                case 1010:
                    printf("Welcome, User!\n");
                    break;
                default:
                    printf("Incorrect Password.\n");
                    break;
            }
            break;
        default:
            printf("Incorrect ID.\n");
            break;
    }
}
