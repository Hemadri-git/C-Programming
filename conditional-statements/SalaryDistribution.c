//Write a c program to calculate the salary and based on that salary calculate the tax for the person based on their designation by following few rules which are below * 3 Type of Designation are there name as -> Developer (Indicated by D or d) -> Trainer (Indicated by T or t) -> Manager (Indicated by M or m) [Note - For wrong designation print a message as "Invalid input". * 3 Type of Extra Allowance are there which will be added in the salary Home Allowance =10000 Food Allowance =3000 Travel Allowance =10000 * If the designation is Developer There salary will be calculated by adding Total Salary= Salary + Home Allowance If the designation is Trainer There salary will be calculated by adding Total Salary= Salary + Home Allowance + Food Allowance If the designation is Manager There salary will be calculated by adding Total Salary= Salary + Home Allowance + Food Allowance + Travel Allowance * If the Total Salary is greater than 40000 then calculate the tax as 10% from the total salary else 5% of total salary [note: Take the Designation and salary from the user and based on the that calculate Total Salary and also based on Total Salary calculate the tax].

#include <stdio.h>

int main() {
    char designation;
    float baseSalary, totalSalary, tax;

    const int HOME_ALLOWANCE = 10000;
    const int FOOD_ALLOWANCE = 3000;
    const int TRAVEL_ALLOWANCE = 10000;

    printf("Enter the designation (D/d for Developer, T/t for Trainer, M/m for Manager):\n ");
    scanf(" %c", &designation);

    printf("Enter the base salary: \n");
    scanf("%f", &baseSalary);

    if (designation == 'D' || designation == 'd') {
        totalSalary = baseSalary + HOME_ALLOWANCE;
    } else if (designation == 'T' || designation == 't') {
        totalSalary = baseSalary + HOME_ALLOWANCE + FOOD_ALLOWANCE;
    } else if (designation == 'M' || designation == 'm') {
        totalSalary = baseSalary + HOME_ALLOWANCE + FOOD_ALLOWANCE + TRAVEL_ALLOWANCE;
    } else {
        printf("Invalid input.\n");
        return 1;
    }

    if (totalSalary > 40000) {
        tax = totalSalary * 0.10;
    } else {
        tax = totalSalary * 0.05;
    }

    printf("Total Salary: %.2f\n", totalSalary);
    printf("Tax: %.2f\n", tax);

    return 0;
}
