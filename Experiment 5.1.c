/* Experiment 5.1 : Declare a global variable outside all functions and use
it inside various functions to understand its accessibility*/
#include <stdio.h>
int global_var = 100;
void function1() {
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1\n");
printf("Inside function1: global_var = %d\n", global_var);
global_var += 50;
}
void function2() {
printf("Inside function2: global_var = %d\n", global_var);
global_var *= 2;
}
int main() {
printf("Inside main before function calls: global_var = %d\n", global_var);
function1();
printf("Inside main after function1 call: global_var = %d\n", global_var);
function2();
printf("Inside main after function2 call: global_var = %d\n", global_var);
return 0;
}
