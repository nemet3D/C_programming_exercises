/*
Write a C program to compute the perimeter and area of a circle with a radius of 6 cm.
Expected Output: 
Perimeter of the Circle = 37.680000 cm
Area of the Circle = 113.040001 square cm
*/

// Includes
#include <stdio.h>

// Variables
int radius = 6;
float pi = 3.14;

int main(void)
{
	float perimeter = 2 * pi * radius;
	float area = pi * radius * radius;
	printf("Perimeter of the circle = %f cm.\n", perimeter);
	printf("Area of the circle = %f square cm.\n", area);
}