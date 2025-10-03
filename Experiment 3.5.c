/*
Experiment 3.1 :
3.5: According to the Gregorian calendar, it was Monday on the date 01/01/01.
If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
*/
#include <stdio.h>
int isLeapYear(int year) {
// Leap year if divisible by 400 or divisible by 4 but not 100
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
return 1;
else
return 0;
}
int main() {
int year, days = 0, day;
printf("Name - Amrit Raj\nSAP ID - 590027589\nCourse-BSC_CS\nBatch-01\n");
printf("Enter a year: ");
scanf("%d"
, &year);
// Calculate total days from year 1 to year-1
for(int y = 1; y < year; y++) {
days += isLeapYear(y) ? 366 : 365;
}
// January 1, Year 1 was Monday, so day 0 = Monday
day = (days + 0) % 7; // 0 for Monday
printf("The day on 1st January %d was ", year);
switch(day) {
case 0: printf("Monday.\n"); break;
case 1: printf("Tuesday.\n"); break;
case 2: printf("Wednesday.\n"); break;
case 3: printf("Thursday.\n"); break;
case 4: printf("Friday.\n"); break;
case 5: printf("Saturday.\n"); break;
case 6: printf("Sunday.\n"); break;
}
return 0;
