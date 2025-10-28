/* Experiment 5.4 : Declare a static local variable inside a function.
Observe how its value persists across function calls.*/
#include <stdio.h>
void staticDemo() {
static int count = 0;
count++;
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1\n");
printf("Count is %d\n", count);
}
int main() {
staticDemo(); // prints 1
staticDemo(); // prints 2
staticDemo(); // prints 3
staticDemo(); // prints 4
return 0;
}
