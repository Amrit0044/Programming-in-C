/*Experiment 1: Installation, Environment Setup and starting with C
Language
4.Write a C program to perform any four arithmetic operation on
two variable*/
#include <stdio.h>
int main() {
printf("Name - Amrit Raj\nSAP ID - 590027589\nCourse-BSC_CS\nBatch-01\n");
printf("\n------------------------\n");
#include <stdio.h>
int num1, num2;
int sum, difference, product;
float quotient;
printf("Enter two integers: ");
scanf("%d %d"
, &num1, &num2);
sum = num1 + num2;
difference = num1 - num2;
product = num1 * num2;
quotient = (float)num1 / num2;
printf("Addition: %d\n", sum);
printf("Subtraction: %d\n", difference);
printf("Multiplication: %d\n", product);
printf("Division: %.2f\n", quotient);
return 0;
}
