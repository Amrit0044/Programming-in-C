/*Experiment 3:
2. WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle 
is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.*/


#include <stdio.h>

int main() {
    float a, b, c;

    printf("Name - Amrit Raj\nSAP ID - 590027589\nCourse-BSC_CS\nBatch-01\n");
    printf("Enter three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity using triangle inequality theorem
    if(a + b > c && b + c > a && c + a > b) {
        printf("Triangle is valid.\n");
        
        // Check for equilateral
        if(a == b && b == c)
            printf("Triangle is Equilateral.\n");
        // Check for isosceles
        else if(a == b || b == c || c == a)
            printf("Triangle is Isosceles.\n");
        // Check for right angle (using Pythagoras theorem)
        else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
            printf("Triangle is Right angled.\n");
        // If none of the above, it's scalene
        else
            printf("Triangle is Scalene.\n");
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
