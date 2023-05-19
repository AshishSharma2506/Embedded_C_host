/*
 * mian.c
 *
 *  Created on: 05-Apr-2023
 *      Author: HP
 */

// Video 191 - 7:40
// using #ifdef ref ECB 63(ii)
#include <stdio.h>

//defining macro that the #ifdef will check.#undef to exclude
#define AREA_TRI
#define AREA_CIR

#undef AREA_TRI // exculding/undefining the Macro using #undef "undefine"


int main(void)
{
// 2 code blocks, one to compute area of a Circle an other for a Triangle

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
