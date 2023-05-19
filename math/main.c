/*
 * main.c
 *
 *  Created on: 04-Mar-2023
 *      Author: HP
 */

#include <stdio.h>
#include "math.h" // since wriiten by the user it should be in "" and not <> as in standard lib


int main(void)
{
	printf("Add: %d\n",math_add(0x0FFF1111,0x0FFF1111));
	printf("Subtract: %d\n",math_add(0x0FFF1111,0x0FFF1111));
	printf("Product: %I64X\n",math_mul(0x0FFF1111,0x0FFF1111));
	printf("Division: %f\n",math_div(100,8));

	return 0;
}
