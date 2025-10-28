/*Experiment 4.4 : The population of a town is 100000. The population has
increased steadily at the rate of 10% per year for the last
10 years. Write a program to determine the population at the
end of each year in the last decade.*/
#include <stdio.h>
#include <math.h>
int main() {
double population = 100000.0;
double rate = 0.10;
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1");
printf("Year\tPopulation\n");
for (int year = 1; year <= 10; year++) {
population = population * (1 + rate);
printf("%d\t%.0f\n", year, population);
}
return 0;
}
