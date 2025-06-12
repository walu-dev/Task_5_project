#include <stdio.h>
#include <stdlib.h>
#include "PurchaseAmount.h"
#include "Loan.h"
#include "SalesTax.h"
#include "TotalSalary.h"

double EmployeeYears, Salary;
int main()
{
    //CalculatePurchaseAmount();
    //CalculateEmployeeBonus();
    //loanEligibility(EmployeeYears, Salary);

   // double CalculatedAmountPayable = CalculateAmountPayable();
   //printf("The payable Amount is: %.2lf", CalculatedAmountPayable);

    double CalculatedTotalSalary = CalculateTotalSalary();
    printf("The total salary is: %lf", CalculatedTotalSalary);
    return 0;
}
