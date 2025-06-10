#include <stdio.h>
#include "PurchaseAmount.h"


void CalculatePurchaseAmount(){
    //declare local variable
    double PurchaseAmount, FinalAmount;
    double discount = 0.1;

    //prompt user for the Purchase amount
    printf("Enter Total Purchase Amount");
    scanf("%lf", &PurchaseAmount);

    //check if amount exceeds 1000
    if(PurchaseAmount > 1000){
        FinalAmount = PurchaseAmount * discount;
        printf("The Final Amount after discount is: %.2lf\n", FinalAmount);
    }else {
        FinalAmount = PurchaseAmount;
        printf("The Final Amount without discount is: %.2lf\n", FinalAmount);
    }

}
