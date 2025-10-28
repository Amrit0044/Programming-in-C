/* Experiment 5.2 : Declare a local variable inside a function and try to access it
outside
the function. Compare this with accessing the global variable from within the function.*/
#include <stdio.h>
int global_var = 50;
void testFunction() {
int local_var = 20;
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1");
printf("Inside testFunction, local_var = %d\n", local_var);
printf("Inside testFunction, global_var = %d\n", global_var);
}
int main() {
testFunction();
printf("Inside main, global_var = %d\n", global_var);
return 0;
}
