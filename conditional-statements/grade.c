#include <stdio.h>

int main() {
    int physics, chemistry, biology, mathematics, computer;
    int total;
    float percentage;
    char grade;

    // Prompt the user to enter marks for each subject
    printf("Enter marks for Physics: ");
    scanf("%d", &physics);
    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks for Biology: ");
    scanf("%d", &biology);
    printf("Enter marks for Mathematics: ");
    scanf("%d", &mathematics);
    printf("Enter marks for Computer: ");
    scanf("%d", &computer);

    // Calculate total and percentage
    total = physics + chemistry + biology + mathematics + computer;
    percentage = (float)total / 5;

    // Determine grade using switch statement
    switch ((int)percentage / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 4:
        case 5:  // Added this line to include percentages between 40-59 in Grade E
            grade = 'E';
            break;
        default:
            grade = 'F';
            break;
    }

    // Print the percentage and grade
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
