#include <stdio.h>
#include "EmployeeBonus.h"

CalculateEmployeeBonus(){
    double bonus = 0.05;
    double WorkingYears, FinalSalary, BasicSalary;

    // Prompt user for years of service and basic salary
    printf("Enter years of service: ");
    scanf("%lf", &WorkingYears);
    printf("Enter basic salary: ");
    scanf("%lf", &BasicSalary);

    // Check if years of service exceed 5 and apply bonus
    if(WorkingYears > 5){
        FinalSalary = (BasicSalary*bonus) + BasicSalary;
        printf("The final salary after bonus is: %.2lf\n",FinalSalary);
    }else {
        FinalSalary = BasicSalary;
        printf("The Final Salary without bonus is: %.2lf\n");
    }
}
