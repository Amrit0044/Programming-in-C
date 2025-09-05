/*Experiment 2:
3. Write a program to calculate Compound Interest*/


#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    printf("Name   -   Amrit Raj\nSAP ID  - 590027589\nCourse-BSC_CS\nBatch-01\n");

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    
    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

   
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    
    amount = principal * pow((1 + rate / 100), time);


    compound_interest = amount - principal;

   
    printf("Compound Interest = %.2lf\n", compound_interest);

    return 0;
}
