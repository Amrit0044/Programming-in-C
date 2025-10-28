/*Experiment 4.5 : // Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print
all such numbers up to a reasonable limit.
Example of Ramanujan number: 1729
12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)*/
// Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers
up to a reasonable limit.
// Example of Ramanujan number: 1729
// 12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)
#include <stdio.h>
#include <math.h>
int main() {
int limit;
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1");
printf("Enter the limit: ");
scanf("%d"
, &limit);
printf("Ramanujan numbers up to %d are:\n", limit);
for (int i = 1; i <= limit; i++) {
int count = 0;
for (int a = 1; a <= cbrt(i); a++) {
for (int b = a; b <= cbrt(i); b++) {
for (int c = a+1; c <= cbrt(i); c++) {
for (int d = c; d <= cbrt(i); d++) {
if ((a*a*a + b*b*b == c*c*c + d*d*d) && (a*a*a + b*b*b == i)) {
count++;
if (count == 1) {
printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", i, a, b, c, d);
}
}
}
}
}
}
}
return 0;
}
