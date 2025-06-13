#include <stdio.h>
#include "StoreDiscount.h"

double CalculateDiscount(double price, double quantity){
    double TotalCost;
    // Input price per unit and quantity
    printf("Enter the price per unit: ");
    scanf("%lf", &price);
    printf("Enter the quantity: ");
    scanf("%lf", &quantity);

     if (quantity >= 10) {
        TotalCost = price * quantity * 0.85; // Apply 15% discount
        printf("Total cost: %.2lf and discount\n", TotalCost);
    } else {
        TotalCost = price * quantity; // No discount
        printf("Total cost: %.2lf and no discount\n", TotalCost);
    }



    return 0;

}
