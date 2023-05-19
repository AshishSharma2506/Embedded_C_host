/*
 * mian.c
 *
 *  Created on: 05-Apr-2023
 *      Author: HP
 */

// Video 191
// to understand conditional compilation. ref ECB 63(i)
#include <stdio.h>
// using function like macro
#define PI 3.1415f
#define AREA_OF_CIRCLE(r) PI*r*r
#define AREA_OF_CIRCLE_2(r) ((PI)*(r)*(r))

int main(void)
{
// 2 code blocks, one to compute area of a Circle an other for a Triangle

	// code block for circle area
	// exclude this one from compilation
#if 0
	float radius;
	printf("This is Circle Area Calculation program.\n");
	fflush(stdout);
	printf("Enter the radius:");
	fflush(stdout);
	scanf("%f",&radius);
	printf("Area of circle is  = %f\n",(3.1415*radius*radius));
	fflush(stdout);
#endif // temrmination of the #if conditional code block needs corresponding #endif

	// code block for traingle area
	float base,height;
	printf("This is Traingle Area Calculation program.\n");
	fflush(stdout);
	printf("Enter the base and height:");
	fflush(stdout);
	scanf("%f %f",&base,&height);
	printf("Area of circle is  = %f\n",(0.5*base*height));
	fflush(stdout);


	return 0;
}
