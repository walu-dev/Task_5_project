#include <stdio.h>
#include "SalesTax.h"

double CalculateAmountPayable(){
    double taxRate, tax, purchaseAmount, payableAmount;
    printf("Enter Purchase Amount:");
    scanf("%lf", &purchaseAmount);

    if(purchaseAmount < 500){
        taxRate = 0.05;
        printf("The applied tax rate is 0.05\n");
    }else {
        taxRate = 0.08;
        printf("The applied tax rate is 0.08\n");
    }

    tax = purchaseAmount * taxRate;
    payableAmount = purchaseAmount + tax;
    return payableAmount;
}
