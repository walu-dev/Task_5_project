#include <stdio.h>
#include "TotalSalary.h"

double CalculateTotalSalary(){
    double hoursWorked, hourlyRate, overtime, regularPay, totalSalary, overtimeHours;

    //prompt user for the hours worked
    printf("Enter Total hours worked");
    scanf("%lf", &hoursWorked);


    //prompt user for the hourlyRate
    printf("Enter hourlyRate");
    scanf("%lf", &hourlyRate);

    if(hoursWorked >  40){
        overtimeHours = hoursWorked - 40;
        overtime = overtimeHours * (hourlyRate * 1.5);
        regularPay = 40 * hourlyRate;
        totalSalary = regularPay + overtime;
    }else {
        totalSalary = hoursWorked * hourlyRate;
    }
    return totalSalary;
}
