/* Experiment 6.1: WAP to read a list of integers and store it in a single
dimensional array. Write a C program to print the second
largest integer in a list of integers.*/
#include <stdio.h>
int main() {
int n;
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
int largest, secondLargest;
if (n < 2) {
printf("Array should contain at least two elements.\n");
return 1;
}
if (arr[0] > arr[1]) {
largest = arr[0];
secondLargest = arr[1];
} else {
largest = arr[1];
secondLargest = arr[0];
}
for (int i = 2; i < n; i++) {
if (arr[i] > largest) {
secondLargest = largest;
largest = arr[i];
} else if (arr[i] > secondLargest && arr[i] != largest) {
secondLargest = arr[i];
}
}
printf("The second largest integer is: %d\n", secondLargest);
return 0;
}
