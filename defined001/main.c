/*
 * mian.c
 *
 *  Created on: 05-Apr-2023
 *      Author: HP
 */

// Video 192
// using 'defined' operator. Ref ECB 64(i)
#include <stdio.h>

//defining macro that the #ifdef will check.#undef to exclude
#define AREA_TRI
#define AREA_CIR




int main(void)
{
	// below can be checked in one line(using 1 driective) using the 'defined' keyword and Logical operators
#if defined(AREA_TRI) && defined(AREA_CIR)
	// say we want to print the statemene below only when both(cricle & traingle) macros are defined
	printf("This is program to calculate Area of Circle & Triangle.\n");
#endif


// providing an error when none of the macros are defined usinf #error directive
#if !defined(AREA_TRI) && !defined(AREA_CIR)
#error "No Macros Defined"
#endif

// 2 code blocks, one to compute area of a Circle an other for a Triangl


	// code block for circle area

#ifdef AREA_TRI
	float radius;
	printf("This is Circle Area Calculation program.\n");
	fflush(stdout);
	printf("Enter the radius:");
	fflush(stdout);
	scanf("%f",&radius);
	printf("Area of circle is  = %f\n",(3.1415*radius*radius));
	fflush(stdout);
#endif // temrmination of the #if conditional code block needs corresponding #endif

#ifdef AREA_CIR
	// code block for traingle area
	float base,height;
	printf("This is Traingle Area Calculation program.\n");
	fflush(stdout);
	printf("Enter the base and height:");
	fflush(stdout);
	scanf("%f %f",&base,&height);
	printf("Area of circle is  = %f\n",(0.5*base*height));
	fflush(stdout);

#endif

	return 0;
}
