#include <stdio.h>
#include <stdlib.h>
#include "PurchaseAmount.h"
#include "EmployeeBonus.h"
#include "Loan.h"
#include "SalesTax.h"
#include "TotalSalary.h"
#include "ProfitAndLoss.h"
#include "NetAmount.h"

double EmployeeYears, Salary, WithdrawAmount;
int main()
{
    /*CalculatePurchaseAmount();
    CalculateEmployeeBonus();
    loanEligibility(EmployeeYears, Salary);

   double CalculatedAmountPayable = CalculateAmountPayable();
   printf("The payable Amount is: %.2lf", CalculatedAmountPayable);

    double CalculatedTotalSalary = CalculateTotalSalary();
    printf("The total salary is: %lf", CalculatedTotalSalary);*/

    //CalculateProfitLoss();
    CalculateNetAmount(WithdrawAmount);

    return 0;
}
