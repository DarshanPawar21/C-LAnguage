#include <stdio.h>
void main()
{
	float c, f, num;
	printf("Q1 = Tempereture Converter");

	printf("\n");
	printf("Enter the celsius : ", c);
	scanf("%f", &c);
	f = (9 * c)/5 + 32;
	printf("The tempereture in fahrenheit : %f", f);
}
