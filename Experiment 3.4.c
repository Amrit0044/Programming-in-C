/*
Experiment 3.1 : Conditional Statements
3.4. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
*/
#include <stdio.h>
int main() {
int x1, y1, x2, y2, x3, y3;
int area;
printf("Name - Amrit Raj\nSAP ID - 590027589\nCourse-BSC_CS\nBatch-01\n");
printf("Enter x1, y1: ");
scanf("%d %d"
, &x1, &y1);
printf("Enter x2, y2: ");
scanf("%d %d"
, &x2, &y2);
printf("Enter x3, y3: ");
scanf("%d %d"
, &x3, &y3);
// Calculate the area of the triangle using the formula
area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
if (area == 0)
printf("The points are collinear.\n");
else
printf("The points are not collinear.\n");
return 0;
