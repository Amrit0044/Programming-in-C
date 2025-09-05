/*Experiment 2 :
1. WAP in C program to calculate the area and perimeter of a rectangle based on its length and width.*/


#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Name   -   Amrit Raj\nSAP ID  - 590027589\nCourse-BSC_CS\nBatch-01\n");
    printf("Enter the length of the rectangle:\n");
    scanf("%f", &length);

    printf("Enter the width of the rectangle:\n");
    scanf("%f", &width);

    area = length * width;

    perimeter = 2 * (length + width);

    printf("Area of the rectangle: %.4f\n", area);
    printf("Perimeter of the rectangle: %.4f\n", perimeter);

    return 0;
}
