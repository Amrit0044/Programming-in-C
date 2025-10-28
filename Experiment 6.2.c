/* Experiment 6.2 : WAP to read a list of integers and store it in a single dimensional
array. Write a C program to count and display positive, negative,
odd, and even numbers in an array.*/
#include <stdio.h>
int main() {
int n, positive = 0, negative = 0, even = 0, odd = 0;
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1\n");
printf("Enter the number of integers: ");
scanf("%d"
, &n);
int arr[n];
printf("Enter %d integers: ", n);
for (int i = 0; i < n; i++) {
scanf("%d"
, &arr[i]);
if (arr[i] > 0)
positive++;
else if (arr[i] < 0)
negative++;
if (arr[i] % 2 == 0)
even++;
else
odd++;
}
printf("Positive numbers: %d\n", positive);
printf("Negative numbers: %d\n", negative);
printf("Even numbers: %d\n", even);
printf("Odd numbers: %d\n", odd);
return 0;
}
