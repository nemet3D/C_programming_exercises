/*
Write a C program to compute the perimeter and area of a rectangle with a height of 7 cm,
and width of 5 cm.
Expected Output: 
Perimeter of the rectangle = 24 cm
Area of the rectangle = 35 square cm
*/

// Includes
#include <stdio.h>

// Variables
int height = 7;
int width = 5;

int main(void)
{
	int perimeter = ( 2 * height ) + ( 2 * width );
	int area = height * width;
	printf("Perimeter of the rectangle = %i cm.\n", perimeter);
	printf("Area of the rectangle = %i square cm.\n", area);
}