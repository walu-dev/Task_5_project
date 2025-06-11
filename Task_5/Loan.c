#include <stdio.h>
#include "Loan.h"


double loanEligibility(double EmployeeYears, double Salary){
    // Get user input
    printf("Enter your monthly salary (UGX): ");
    scanf("%lf", &Salary);

    printf("Enter your years of employment: ");
    scanf("%d", &EmployeeYears);
    if(Salary >= 5000 || EmployeeYears >= 2){
        printf("You are eligible for a loan");
    }else {
         printf("You are not eligible for a loan");
    }
    return 0;
}
