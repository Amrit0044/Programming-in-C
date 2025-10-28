#include<stdio.h>
int main()
{
printf("Amrit Raj\nSAP ID: 590027589\nCourse: BSc_CS \nBatch: 1");
printf("\n-----------------\n");
printf("The pattern is:\n");
int i, j, k;
for(i=1; i<=5; i++)
{
for(k=5-i; k>=0; k--)
{
printf(" ");
}
{
for(j=1; j<=i; j++)
printf("%d", j);
}
printf("\n");
}
return 0;
}
