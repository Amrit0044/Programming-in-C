/*Experiment 1: Installation, Environment Setup and starting with C language
3 . Write a C program to add two numbers, take number from user*/
#include <stdio.h>
int main() {
printf("Name - Amrit Raj\nSAP ID - 590027589\nCourse-BSC_CS\nBatch-01\n");
printf("\n------------------------\n");
int num1, num2, sum;
printf("Enter two numbers: ");
scanf("%d %d"
, &num1, &num2);
sum = num1 + num2;
printf("Sum of %d and %d is: %d\n", num1, num2, sum);
return 0;
}
