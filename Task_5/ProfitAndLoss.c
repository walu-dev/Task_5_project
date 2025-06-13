#include <stdio.h>
#include "ProfitAndLoss.h"

int CalculateProfitLoss(){
    int CostPrice, SellingPrice, Profit, Loss;

    //Prompt user Cost Price
    printf("Enter Cost Price: ");
    scanf("%d", &CostPrice);

    //Prompt user for selling price
    printf("Enter Selling Price: ");
    scanf("%d", &SellingPrice);

    if(SellingPrice > CostPrice){
        Profit = SellingPrice - CostPrice;
        printf("The Profit is: %d", Profit);
    }else{
        Loss = CostPrice - SellingPrice;
        printf("The Loss is: %d", Loss);
    }

    return 0;
}
