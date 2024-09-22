#include <stdio.h>


int main() {
    float basic_salary, gross_salary, hra, da;

    // Input basic salary from the user
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    hra = 0.20 * basic_salary; 
    da = 0.50 * basic_salary;   
    gross_salary = basic_salary + hra + da;

    printf("Gross Salary = %.2f\n", gross_salary);

    return 0;
}

