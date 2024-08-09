#include <stdio.h>

int main() {
    int vehicleType, vehicleAge, issue, tyreCount;
    char ownerName[50], vehicleName[50];

    printf("Enter your name: ");
    scanf("%s", ownerName);

    printf("Enter your vehicle name: ");
    scanf("%s", vehicleName);

    printf("Enter vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): ");
    scanf("%d", &vehicleType);

    if (vehicleType != 2 && vehicleType != 3 && vehicleType != 4) {
        printf("This service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler.\n");
        return 0;
    }

    printf("Enter the age of your vehicle (in months): ");
    scanf("%d", &vehicleAge);

    if (vehicleAge <= 8) {
        printf("Your vehicle service will be done after a while.\n");
        return 0;
    }

    printf("Choose the issue with your vehicle:\n");
    printf("1) Enter 1 for tyre problem\n");
    printf("2) Enter 2 for fuel problem\n");
    printf("3) Enter 3 for engine issue\n");
    printf("4) Enter 4 for general services\n");
    scanf("%d", &issue);

    int bill = 0;

    switch(issue) {
        case 1:
            printf("How many tyres are you facing the issue with?: ");
            scanf("%d", &tyreCount);
            bill = 400 * tyreCount;
            printf("Name of the owner: %s\n", ownerName);
            printf("Name of the vehicle: %s\n", vehicleName);
            printf("Issue: Tyre problem\n");
            printf("Bill: Rs. %d\n", bill);
            break;
        case 2:
            bill = 1500;
            printf("Name of the owner: %s\n", ownerName);
            printf("Name of the vehicle: %s\n", vehicleName);
            printf("Issue: Fuel problem\n");
            printf("Bill: Rs. %d\n", bill);
            break;
        case 3:
            bill = 5000;
            printf("Name of the owner: %s\n", ownerName);
            printf("Name of the vehicle: %s\n", vehicleName);
            printf("Issue: Engine issue\n");
            printf("Bill: Rs. %d\n", bill);
            break;
        case 4:
            bill = 1000;
            printf("Name of the owner: %s\n", ownerName);
            printf("Name of the vehicle: %s\n", vehicleName);
            printf("Issue: General services\n");
            printf("Bill: Rs. %d\n", bill);
            break;
        default:
            printf("Invalid option.\n");
    }

    return 0;
}
