#include <stdio.h>
#include "TotalBill.h"

double CalculateTotalBill(double units){
    double bill;

    //Prompt user enter number of units
    printf("Enter number of units: ");
    scanf("%lf", &units);

     if (units < 200) {
        bill = units * 0.50;
        printf("Total bill: %.2lf at charge 0.50 \n", bill);
    } else {
        bill = units * 0.75;
        printf("Total bill: %.2lf\n at charge 0.75", bill);
    }
    return 0;
}
