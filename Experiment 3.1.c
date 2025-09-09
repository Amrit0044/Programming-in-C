/*Experiment 3:
1. write a c program to check whether a number is even or odd */

#include <stdio.h>

int main() {
    int number;
    printf("Name - Amrit Raj\nSAP ID - 590027589\nCourse-BSC_CS\nBatch-01\n");
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}

