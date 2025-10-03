/*
Experiment 3.1 - Conditional Statements
3.6 : WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find
out which rectangle has the highest perimeter. The minimum number of rectangles should be three.*/
#include <stdio.h>
int main() {
int length[3], breadth[3];
int perimeter[3];
int i, maxIndex = 0;
// Input length and breadth for three rectangles
for(i = 0; i < 3; i++) {
printf("Name - Amrit Raj\nSAP ID - 590027589\nCourse-BSC_CS\nBatch-01\n");
printf("Enter length and breadth of rectangle %d: ", i+1);
scanf("%d %d"
, &length[i], &breadth[i]);
perimeter[i] = 2 * (length[i] + breadth[i]);
}
// Find the index of rectangle with highest perimeter using ternary operator
maxIndex = (perimeter[0] > perimeter[1]) ?
((perimeter[0] > perimeter[2]) ? 0 : 2) :
((perimeter[1] > perimeter[2]) ? 1 : 2);
printf("Rectangle %d has the highest perimeter of %d.\n", maxIndex + 1, perimeter[maxIndex]);
return 0;
