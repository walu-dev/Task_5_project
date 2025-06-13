#include <stdio.h>
#include "NetAmount.h"

double WithdrawAmount;
double CalculateNetAmount(double WithdrawAmount){
    double NetAmount;

    //Prompt user Withdraw amount
    printf("Enter Withdraw amount: ");
    scanf("%lf", &WithdrawAmount);

    if(WithdrawAmount < 500){
        NetAmount = WithdrawAmount - 10;
        printf("Net amount received: %.2f\n", NetAmount);
    }else{
        NetAmount = WithdrawAmount;
        printf("Net amount received: %.2f\n", NetAmount);
    }


    return 0;
}
