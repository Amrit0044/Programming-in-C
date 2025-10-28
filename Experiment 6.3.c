/* Experiment 6.3 :WAP to read a list of integers and store it in
a single dimensional array. Write a C program to find the
frequency of a particular number in a list of integers.*/
#include <stdio.h>
int main() {
int n, num, frequency = 0;
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1\n");
printf("Enter the number of integers: ");
scanf("%d"
, &n);
int arr[n];
printf("Enter %d integers: ", n);
for (int i = 0; i < n; i++) {
scanf("%d"
, &arr[i]);
}
printf("Enter the number to find frequency of: ");
scanf("%d"
, &num);
for (int i = 0; i < n; i++) {
if (arr[i] == num) {
frequency++;
}
}
printf("The frequency of %d is: %d\n", num, frequency);
return 0;
}
