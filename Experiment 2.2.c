*/Experiment 2:
2. WAP in C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.*/


#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf(“Name   -   Amrit Raj\nSAP ID  - 590027589\nCourse-BSC_CS\nBatch-01\n");    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
