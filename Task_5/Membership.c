#include <stdio.h>
#include "Membership.h"

double CalculateMembership(double duration, double TotalFee){
    double discount, FinalAmount;
     // Input membership duration
    printf("Enter membership duration (in years): ");
    scanf("%lf", &duration);

    // Input total fee
    printf("Enter total fee: ");
    scanf("%lf", &TotalFee);

    if(duration >= 1 && duration <= 3)
    {
        discount = 0.05;
        FinalAmount = TotalFee - (TotalFee * discount);
        printf("Final payable amount: %.2lf at discount 0.05\n", FinalAmount);
    }else if (duration >= 4) {
        discount = 0.1; // 10% discount
        FinalAmount = TotalFee - (TotalFee * discount);
        printf("Final payable amount: %.2lf at discount 0.1\n", FinalAmount);
    }
    return 0;
}
