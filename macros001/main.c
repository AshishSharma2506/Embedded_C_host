/*
 * mian.c
 *
 *  Created on: 05-Apr-2023
 *      Author: HP
 */

// Video 190
#include <stdio.h>
// using function like macro
#define PI 3.1415f
#define AREA_OF_CIRCLE(r) PI*r*r
#define AREA_OF_CIRCLE_2(r) ((PI)*(r)*(r))

int main(void)
{

	float areaCircle,areaCircle2;
	areaCircle =  AREA_OF_CIRCLE(2);// using the macro for area
	areaCircle2 =  AREA_OF_CIRCLE(1+1);// using the macro for area
	printf("Area1 = %f\n",areaCircle);
	printf("Area2 = %f\n",areaCircle2);// will not be the same!! Even though same input. Ref ECB62(ii)

	areaCircle =  AREA_OF_CIRCLE_2(2);// using the macro for area
	areaCircle2 =  AREA_OF_CIRCLE_2(1+1);// using the macro for area
	printf("Area1 = %f\n",areaCircle);
	printf("Area2 = %f\n",areaCircle2);// will be the same!! Use Parenthesis generously with Macros


	return 0;
}
