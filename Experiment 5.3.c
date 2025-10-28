/* Experiment 5.3 :
Declare variables within different code blocks (enclosed by curly braces) and
test their accessibility within and outside those blocks*/
#include <stdio.h>
int main() {
{
int x = 10;
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1");
printf("Inside first block, x = %d\n", x);
}
{
int y = 20;
printf("Inside second block, y = %d\n", y);
}
int z = 30;
printf("Outside any block, z = %d\n", z);
return 0;
}
